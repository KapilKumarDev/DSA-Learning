class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        for(int i=0, j=n-1; i<n; i++, j--){
            ans[i] = nums[i];
            ans[i+n] = nums[j];
        }
        return ans;
    }
};