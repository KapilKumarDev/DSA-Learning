class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0 || (x%10==0 && x!=0)) return false;

        int y = x;
        long int reverse = 0;

        while(y>0){
            reverse *= 10;
            reverse += y%10;
            y /= 10;
        }
        
        return reverse==x;

    }
};