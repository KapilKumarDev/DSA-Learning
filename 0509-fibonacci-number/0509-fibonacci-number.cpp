class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        vector<int> dp(n, -1);
        if(dp[n-1]!=-1){
            return dp[n];
        }
        dp[n-1] = fib(n-1) + fib(n-2);
        return dp[n-1];
    }
};