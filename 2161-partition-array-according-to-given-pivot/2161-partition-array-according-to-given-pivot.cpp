class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> temp(nums.size(),0);
        int i = 0, j = nums.size() - 1;
        int x = 0, y = nums.size() - 1;
        while (i < nums.size() && j >= 0) {
            if(nums[i]<pivot){
                temp[x]=nums[i];
                x++;
            }
            if(nums[j]>pivot){
                temp[y]=nums[j];
                y--;
            }
            i++;
            j--;
        }
        while(x<=y){
            temp[x]=pivot;
            x++;
        }
        return temp;
    }
};