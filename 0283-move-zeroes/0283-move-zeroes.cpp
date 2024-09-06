class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int> v;
        // int count = 0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         count++;
        //     }
        //     else{
        //         v.push_back(nums[i]);
        //     }
        // }
        // nums = v;
        // for(int i=0;i<count;i++){
        //     nums.push_back(0);        
        // }
        int count=0;
        int n = nums.size()-1,l=0;
        while(l<=n){
            if(nums[l]==0){
                count++;
            }
            else{
                nums.push_back(nums[l]);
            }
            l++;
        }
        nums.erase(nums.begin(),nums.begin()+n+1);
        for(int i=0;i<count;i++){
            nums.push_back(0);
        }
    }
};