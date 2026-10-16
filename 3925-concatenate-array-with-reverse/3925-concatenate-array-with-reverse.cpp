class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(2*size);
        for (int i = 0; i < size; i++) {
            ans[i] = nums[i];
            ans[2*size - i-1] = nums[i]; 
        }
        return ans;
    }
};