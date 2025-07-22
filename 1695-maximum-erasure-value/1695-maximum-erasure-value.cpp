class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int sum = 0,maxsum = 0;
        int i = 0, j = 0;
        while(j<nums.size()){
            int num = nums[j];
            while(s.find(num)!=s.end()){
                s.erase(nums[i]);
                sum = sum - nums[i];
                i++;
            }

            s.insert(num);
            sum = sum+num;
            maxsum = max(sum,maxsum);
            j++;
        }
        
        return maxsum;
    }
};