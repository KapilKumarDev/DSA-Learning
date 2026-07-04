class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }

        int mx = -1;
        for(auto it: mp){
            if(it.first == it.second){
                mx = max(mx, it.first);
            }
        }
        return mx;
    }
};