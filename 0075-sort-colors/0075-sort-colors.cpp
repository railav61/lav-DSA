class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size()-1;
        int l=0,mid=0;
        while(mid<=n){
            if(nums[mid]==0){
                swap(nums[mid],nums[l]);
                mid++;
                l++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[n]);
                n--;
            }
        }
    }
};