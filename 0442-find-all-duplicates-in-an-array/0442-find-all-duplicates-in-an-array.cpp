class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        int ans;
        for(int i=1;i<nums.size();i++){
           if(nums[i]==nums[i-1]){
            arr.push_back(nums[i]);
           }
        }
        return arr;
    }
};