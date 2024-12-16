class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n1 = nums.size();
        int i = 0;
        while(i<k){
            int minVal = INT_MAX;
            int idx = 0;
            for(int j=0;j<n1;j++){
                if(nums[j]<minVal){
                    minVal = nums[j];
                    idx = j;
                }
            }
            nums[idx] *= multiplier;
            i++;
        }
        return nums;
    }
};