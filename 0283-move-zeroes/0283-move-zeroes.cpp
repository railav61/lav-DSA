class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
                v.push_back(nums[i]);
            }
        }
        nums = v;
        for(int i=0;i<count;i++){
            nums.push_back(0);        
        }
    }
};