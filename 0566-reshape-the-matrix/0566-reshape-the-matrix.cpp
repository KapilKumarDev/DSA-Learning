class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if(m*n != r*c) return mat;

        int a = 0, b = 0;
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                ans[i][j] = mat[a][b];
                b++;
                if(b>=n){
                    b = 0; 
                    a++;
                }
            }
        }
        return ans;
    }
};