class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = ((nums.size())*(nums.size()+1))/2;
        int sum2 = 0;
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
        }
        return sum-sum2;
    }
};