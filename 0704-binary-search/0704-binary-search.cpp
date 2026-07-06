class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<target){
                low = mid+1;
                continue;
            }
            if(nums[mid]>target){
                high = mid - 1;
                continue;
            }
            return mid;
        }
        return -1;
    }
};