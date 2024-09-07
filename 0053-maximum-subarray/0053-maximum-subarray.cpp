class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long sum=0;
        long long max=LONG_MIN;
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(max<sum){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
};