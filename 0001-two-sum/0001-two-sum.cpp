class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mep;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(mep.count(target-nums[i])>0){
                ans.push_back(mep[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            mep[nums[i]] = i;
        }
        return ans;
    }
};