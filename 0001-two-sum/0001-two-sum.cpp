class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x=nums.size();
        unordered_map<int,int> mpp;
        vector<int> v;
        for(int i=0;i<x;i++){
            int c = target-nums[i];
            if (mpp.find(c) != mpp.end()) {
                v.push_back(mpp[c]);
                v.push_back(i);
                return v;
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};