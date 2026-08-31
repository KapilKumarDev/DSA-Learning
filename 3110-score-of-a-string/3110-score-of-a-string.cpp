class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;

        for(int i=0; i<s.size()-1; i++){
            int cur = s[i];
            int nex = s[i+1];
            ans += abs(cur-nex);
        }
        return ans;
    }
};