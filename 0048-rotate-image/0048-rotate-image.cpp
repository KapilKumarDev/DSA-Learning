class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int k = 0;

        for(int i=k; i<n; i++){
            for(int j=k; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
            k++;
        }

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};