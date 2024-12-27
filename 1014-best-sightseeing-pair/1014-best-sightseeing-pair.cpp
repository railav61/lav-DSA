class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        if(n==1) return values[0];
        int maxVal = INT_MIN;
        for(int i = 0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int x = (values[i]+values[j]) + (i-j);
                maxVal = max(maxVal,x);
            }
        }
        return maxVal;
    }
};