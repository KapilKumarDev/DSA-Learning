class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len = nums.size();
        int count = 0;

        for(int i=0; i<len; i++){
            int digit = 0;
            int num = nums[i];
            while(num>0){
                num /= 10;
                digit += 1;
            }
            if(digit%2==0) count++;
        }
        return count;
    }
};