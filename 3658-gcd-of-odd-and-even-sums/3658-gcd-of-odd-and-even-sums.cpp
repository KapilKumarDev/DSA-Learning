class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n<=1) return n;
        int oddSum = n*n;
        int evenSum = n*(n+1);
        int ans;

        int r = oddSum/2;
        for(int i=r; i>0; i--){
            if(oddSum%i==0 && evenSum%i==0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};