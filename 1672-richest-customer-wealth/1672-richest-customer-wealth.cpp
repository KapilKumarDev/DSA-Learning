class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rowSize = accounts.size();
        int colSize = accounts[0].size();

        int max = 0;
        for(int i=0; i<rowSize; i++){
            int sum = 0;
            for(int j=0; j<colSize; j++){
                sum += accounts[i][j];
            }
            if(sum>max) max = sum;
        }
        return max;
    }
};