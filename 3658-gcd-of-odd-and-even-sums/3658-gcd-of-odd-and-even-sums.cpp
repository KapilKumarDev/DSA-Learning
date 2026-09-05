class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n<=1) return n;
        int oddSum = n*n;
        int evenSum = n*(n+1);
        int ans;

        return gcd(oddSum, evenSum);
    }
};