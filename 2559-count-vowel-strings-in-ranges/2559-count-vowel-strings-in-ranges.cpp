// class Solution {
// public:
// TLE - time limit exceeds
//     vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
//         int n = queries.size();
//         int t = 0;
//         vector<int> v;
//         while(t<n){
//             int count = 0;
//             for(int i = queries[t][0];i<=queries[t][1];i++){
//                 string s = words[i];
//                 int x = s.size()-1;
//                 if ((s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u') && (s[x]=='a'||s[x]=='e'||s[x]=='i'||s[x]=='o'||s[x]=='u')) count++;
//             }
//             v.push_back(count);
//             t++;
//         }
//         return v;
//     }
// };

class Solution {
public:
    bool isVowel(char &ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int Q = queries.size();
        int N = words.size();
        //"a,e,i,o,u"
        vector<int> result(Q);

        vector<int> cumSum(N);
        int sum = 0;
        for(int i = 0; i < N; i++) { //O(N)
            if(isVowel(words[i][0]) && isVowel(words[i].back())) {
                sum++;
            }

            cumSum[i] = sum;
        }

        for(int i = 0; i < Q; i++) { //O(Q)
            int l = queries[i][0];
            int r = queries[i][1];

            result[i] = cumSum[r] - ((l > 0) ? cumSum[l-1] : 0);
        }

        return result;
    }
};