class Solution {
public:
void skipspace(string &s,int &n,int &pos){
    while(pos<n && (s[pos] =='_')){
        pos++;
    }
}


    bool canChange(string start, string target) {
        int n = start.size();

        int first = 0,second =0,limit_idx = -1;
        while(first<n){
            skipspace(start,n,first);
            skipspace(target,n,second);

            if(first == n && second == n) return true;
            if(start[first] != target[second]) return false;
            if(start[first] == 'L' && (first<=limit_idx || second>first)){
                return false;
            }
            else if(start[first] == 'R' && second<first){
                return false;
            }

            limit_idx = second;
            first++;
            second++;
        }
        skipspace(start,n,first);
        skipspace(target,n,second);

        return first==n && second==n;
    }
};