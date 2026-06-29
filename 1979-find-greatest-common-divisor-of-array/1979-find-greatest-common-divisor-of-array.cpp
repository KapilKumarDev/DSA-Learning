class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = nums[0], maxi = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>maxi) maxi = nums[i];
            if(nums[i]<mini) mini = nums[i];
        }

        while(mini!=0 && maxi!=0){
            if(maxi>mini) maxi = maxi % mini;
            else mini = mini % maxi;
        }
        return(max(mini, maxi));
    }
};