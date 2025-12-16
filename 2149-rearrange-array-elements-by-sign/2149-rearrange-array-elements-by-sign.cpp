class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int n = nums.size();
        for(auto it : nums){
            if(it<0) neg.push_back(it);
            else pos.push_back(it);
        }

        vector<int> temp;
        for(int i=0;i<n/2;i++){
            temp.push_back(pos[i]);
            temp.push_back(neg[i]);
        }
        return temp;
    }
};