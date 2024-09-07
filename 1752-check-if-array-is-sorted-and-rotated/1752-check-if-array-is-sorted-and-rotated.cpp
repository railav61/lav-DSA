class Solution {
public:

bool rev(vector<int> nums,int k){
    int n = nums.size()-1;
        k = k%(n+1);
        int l = 0,r=n;
    while(l<=r){
        swap(nums[l],nums[r]);
        l++;r--;
    }
    l=0;
    r=n;
    int t = k-1;
    while(l<=t){
        int temp = nums[l];
        nums[l] = nums[t];
        nums[t] = temp;
        l++;t--;
    }
    while(k<=r){
        int temp = nums[k];
        nums[k] = nums[r];
        nums[r] = temp;
        k++;r--;
    }
    for(int i=0;i<n;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
    return true;

}

    bool check(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<=n;i++){
            bool x = rev(nums,i);
            if(x==true){
                return true;
            }
        }
        return false;
    }
};