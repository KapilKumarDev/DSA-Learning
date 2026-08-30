class Solution {
public:
    int mirrorDistance(int n) {
        int reverse = 0;
        int k = n;
        while(k>0){
            reverse *= 10;
            reverse += k%10;
            k/=10;
        }
        return abs(n - reverse);
    }
};