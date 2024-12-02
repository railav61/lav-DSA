class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord){
    int n = sentence.size();
    int m = searchWord.size();

    if (n < m || n == 0 || m == 0)
    {
        return -1;
    }

    int i = 0;
    int j = 0;
    int word = 1;

    while (i < n)
    {
        if (sentence[i] == ' ')
        {
            i++;
            j = 0;
            word++;
        }
        if (sentence[i] == searchWord[j])
        {
            i++;
            j++;
            if (j == m)
            {
                if ((i - j) == 0)
                {
                    return word;
                }
                else if(i>j+1){
                    if(sentence[i - (j + 1)] == ' ' ){
                        return word;
                    }
                }
                else
                    j = 0;
                i++;
            }
        }
        else
        {
            j = 0;
            i++;
        }
    }
    return -1;
    }
};