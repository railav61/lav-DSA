class Solution {
public:
    int maxSum(vector<int>& nums) {
        int mxSum = INT_MIN;
        unordered_set<int> s;
        for(auto x : nums){
            s.insert(x);
        }
        int sum = 0;
        for(auto x : s){
            sum += x;
            if(x>mxSum){
                mxSum = x;
            }
            else if(sum>=mxSum ){
                mxSum = sum;
            }
            else{
                sum = mxSum;
            }
        }

        return mxSum;
    }
};