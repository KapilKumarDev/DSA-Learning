class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        int start = 0;
        for(int i=n-1; i>=0; i--){
            if(!start){
                if(s[i]==' ') continue;
                start = 1;
                count++;
            }
            else{
                if(s[i]==' ') break;
                count++;
            }
        }
        return count;
    }
};