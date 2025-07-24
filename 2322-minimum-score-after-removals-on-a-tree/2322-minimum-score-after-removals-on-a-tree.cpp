class Solution {
public:
    void dfs(int node, int parent, vector<int>& subtreeXor, vector<int>&inTime, vector<int>& outTime, int &time, vector<int>& nums, unordered_map<int,vector<int>>& adj){

        subtreeXor[node] = nums[node];
        inTime[node] = time;
        time++;
        for(int &ngbr : adj[node]){
            if(ngbr!=parent){
                dfs(ngbr,node,subtreeXor,inTime,outTime,time,nums,adj);
                subtreeXor[node] ^= subtreeXor[ngbr];
            }
        }
        outTime[node] = time;
        time++;
    }

    bool isAncestor(int u, int v, vector<int>& inTime, vector<int>& outTime){
        return inTime[v]>=inTime[u] && outTime[v]<=outTime[u];
    }

    int getScore(int a, int b, int c){
        int maxScore = max({a,b,c});
        int minScore = min({a,b,c});

        return maxScore - minScore;
    }

    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        int n = nums.size();

        unordered_map<int,vector<int>> adj;

        for(auto &ed : edges){
            int u = ed[0];
            int v = ed[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> subtreeXor(n,0);

        vector<int> inTime(n,0);
        vector<int> outTime(n,0);

        int timer = 0;

        dfs(0,-1,subtreeXor, inTime,outTime,timer,nums,adj);

        int result = INT_MAX;
        for(int u = 1; u < n ; u++){
            for(int v= u+1 ; v < n ; v++){
                int xor1, xor2,xor3;

                if(isAncestor(u,v,inTime,outTime)){
                    xor1 = subtreeXor[v];
                    xor2 = subtreeXor[u] ^ subtreeXor[v];
                    xor3 = subtreeXor[0] ^ xor1 ^ xor2;
                } else if(isAncestor(v,u,inTime,outTime)) {
                    xor1 = subtreeXor[u];
                    xor2 = subtreeXor[v] ^ subtreeXor[u];
                    xor3 = subtreeXor[0] ^ xor1 ^ xor2;
                }
                else {
                    xor1 = subtreeXor[u];
                    xor2 = subtreeXor[v];
                    xor3 = subtreeXor[0] ^ xor1 ^ xor2;
                }

                result = min(result, getScore(xor1,xor2,xor3));
            }
        }

        return result;
    }
};