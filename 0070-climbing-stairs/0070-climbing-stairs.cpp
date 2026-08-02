class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;

        int current = 1;
        int next = 2;

        for(int i=3; i<=n; i++){
            int temp = current;
            current = next;
            next = next + temp;
        }
        return next;
    }
};