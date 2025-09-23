class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] < nums2[j]) {
                    break;
                }
                if (nums1[i] == nums2[j]) {
                    if (arr.empty() || arr.back() != nums2[j])
                        arr.push_back(nums1[i]);
                    nums2[j] = -111;
                    break;
                }
            }
        }

        return arr;
    }
};