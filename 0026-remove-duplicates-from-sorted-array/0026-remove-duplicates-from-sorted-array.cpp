class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[i+1]){
                v.push_back(nums[i]);
            }
            
        }
        nums = v;
        return v.size();
    }
};