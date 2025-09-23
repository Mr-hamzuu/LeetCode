class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count = 1;
        vector<int> newarr;
        for (int i = 1; i < arr.size(); i++) {
            if (i < arr.size() && arr[i] == arr[i - 1]) {
                count++;
            } else {
                newarr.push_back(count);
                count = 1;
            }
        }
        newarr.push_back(count);
        sort(newarr.begin(),newarr.end());
        for (int i = 1; i < newarr.size(); i++) {
            if (newarr[i] == newarr[i - 1]) {
                return false;  
            }
        }
        return true;
    }
};