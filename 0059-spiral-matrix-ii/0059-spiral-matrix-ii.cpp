class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0; int bottom = n-1;
        int left = 0; int right = n-1;

        int k = 1;

        vector<vector<int>> ans(n, vector<int>(n));
        while(top<=bottom && left<=right){
            for(int i=left; i<=right; i++){
                ans[top][i] = k++;
            }
            top++;
            if(top>bottom) break;
            for(int i=top; i<=bottom; i++){
                ans[i][right] = k++;
            }
            right--;
            if(right<left) break;
            for(int i=right; i>=left; i--){
                ans[bottom][i] = k++;
            }
            bottom--;
            if(bottom<top) break;
            for(int i=bottom; i>=top; i--){
                ans[i][left] = k++;
            }
            left++;
        }
        return ans;
    }
};