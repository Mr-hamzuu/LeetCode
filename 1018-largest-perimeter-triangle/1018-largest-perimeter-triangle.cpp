class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int j = nums.size()-1; j >= 2; j--) {
            int a = nums[j - 2];
            int b = nums[j -1];
            int c = nums[j];
            if (a + b > c) {
                return a + b + c;
            }
        }
        return 0;
    }
};