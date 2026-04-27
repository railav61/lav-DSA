class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];
            if(mpp.find(rem)!=mpp.end()){
                v.push_back(mpp[rem]);
                v.push_back(i);
                break;
            }
            mpp[nums[i]] = i;
        }
        return v;
    }
};