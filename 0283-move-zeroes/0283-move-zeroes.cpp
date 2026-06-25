class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return;
        int i = 0;
        int j = 1;
        while(j<n){
            if(nums[i]!=0){
                i++;
                j++;
            }
            else if(nums[j]==0) j++;
            else{
                nums[i++] = nums[j];
                nums[j++] = 0;
            }
        }
    }
};