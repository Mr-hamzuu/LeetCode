class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int j = nums.size(); j >= 3; j--) {
            int a = nums[j - 3];
            int b = nums[j - 2];
            int c = nums[j-1];
            if (a + b > c) {
                return a + b + c;
            }
        }
        return 0;
    }
};