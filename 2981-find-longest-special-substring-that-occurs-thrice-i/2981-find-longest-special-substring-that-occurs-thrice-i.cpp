class Solution {
public:
    int maximumLength(string s) {
        map<pair<char,int>,int> mp;
        int n = s.size();
        for(int i =0;i<n;i++){
            char ch = s[i];
            int len = 0;
            for(int j =i;j<n;j++){
                if(s[j] == ch){
                    len++;
                    mp[{ch,len}]++;
                }
                else{
                    break;
                }
            }
        }
        int result = 0;
        for(auto &x:mp){
            int len = x.first.second;
            int freq = x.second;
            if(freq>=3 && len > result){
                result = len;
            }
        }
        return result == 0 ? -1 : result;

    }
};