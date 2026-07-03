class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=n-1; i>=0; i--){
            if(nums[i]<target) return i+1;
        }
        return 0;
    }
};