class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> u,v;
        for(int i=0;i<n;i++){
            if(nums[i]>=0)
            u.push_back(nums[i]);
            else
            v.push_back(nums[i]);
        }
        vector<int> x;
        auto it = u.begin();
        auto it1 = v.begin();
        while(it!=u.end() && it1!=v.end()){
            x.push_back(*it);
            x.push_back(*it1);
            it++;
            it1++;
        }
        return x;
    }
};