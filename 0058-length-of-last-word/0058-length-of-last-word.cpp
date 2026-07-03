class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 1;
        int flag = 0;
        for(int i=n-1; i>=0; i--){
            if(flag==0){
                if(s[i]==' ') continue;
                else flag = 1;
            }
            else{
                if(s[i]!=' ') count++;
                else break;
            }
        }
        return count;
    }
};