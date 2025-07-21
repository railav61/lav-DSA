class Solution {
public:
    string makeFancyString(string s) {
        int cnt=1,i=1;
        string str = "";
        str = str+s[0];
        while(i!=s.size()){
            if(s[i]!=s[i-1]){
                cnt = 0;
                str.push_back(s[i]);
                cnt++;
            }
            else if(s[i]==s[i-1] && cnt<2){
                str.push_back(s[i]);
                cnt++;
            }
            i++;
        }

        return str;
    }
};