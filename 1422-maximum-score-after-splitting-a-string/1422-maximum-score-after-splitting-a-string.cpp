class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int maxVal = 0;
        int countOne = 0,countZero = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') countOne++;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='0') countZero++;
            if(s[i]=='1') countOne--;
            int sum = countZero + countOne;
            maxVal = max(maxVal,sum);
        }
        return maxVal;
    }
};