class Solution {
public:
    int mySqrt(int x) {
        double i;
        for(i=1; i*i<=x; i++){ }
        return i-1;
    }
};