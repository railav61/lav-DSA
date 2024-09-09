class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int longest = 1;
        int count = 1;
        int lastsmall = INT_MIN;
        if(n==0)
        return 0;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmall){
                count+=1;
                lastsmall=nums[i];
            }
            else if(nums[i]-1!=lastsmall){
                count =1;
                lastsmall = nums[i];
            }
            longest = max(count,longest);
        }
        return longest;
    }
};