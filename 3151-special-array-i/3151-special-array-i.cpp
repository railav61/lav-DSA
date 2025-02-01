class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return true;
        for(int i=0;i<n-1;i++){
            int x1 = nums[i]%2;
            int x2 = nums[i+1]%2;
            if(x1 == x2) return false;
        }
        return true;
    }
};