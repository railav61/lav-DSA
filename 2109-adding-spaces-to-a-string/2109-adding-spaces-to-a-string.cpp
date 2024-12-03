class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        int m = spaces.size();
        string x;
        int i = 0;
        int j = 0;
        while(i<n){
            if(j<m && i == spaces[j] ){
                x+= ' ';
                x+=s[i];
                i++;
                j++;
            }
            else{
                x+=s[i];
                i++;
            }
        }
        return x;
    }
};