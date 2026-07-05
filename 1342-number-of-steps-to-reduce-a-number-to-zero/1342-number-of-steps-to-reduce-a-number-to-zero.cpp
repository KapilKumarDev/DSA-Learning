class Solution {
public:
    int numberOfSteps(int num) {
        int a = num;
        int count = 0;
        while(a>0){
            if(a%2==0) a/=2;
            else a-=1;
            count++;
        }
        return count;
    }
};