class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        ans.push_back((double)(celsius+273.15));
        ans.push_back((double)(celsius * 1.80 + 32.00));
        return ans;
    }
};