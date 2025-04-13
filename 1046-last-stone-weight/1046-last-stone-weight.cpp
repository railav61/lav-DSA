class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p(stones.begin(),stones.end());
        while(p.size()>1){
            int first = p.top();
            p.pop();
            int second = p.top();
            p.pop();
            if(first!=second) {
                p.push(first-second);
            }
        }
        return p.empty() ? 0 : p.top();
    }
};