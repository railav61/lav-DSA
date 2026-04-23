class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
        unordered_map<int,int> mpp;
        for(int i = 0; i<nums.size();i++){
            int next = target - nums[i];
            if(mpp.find(next)!= mpp.end()){
                temp.push_back(mpp[next]);
                temp.push_back(i);
            }
            mpp[nums[i]] = i;
        }
        return temp;
    }
};