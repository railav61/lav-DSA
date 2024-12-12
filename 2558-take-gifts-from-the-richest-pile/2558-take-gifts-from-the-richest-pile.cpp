class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum = 0;
    long long nums = LONG_MIN;
    int index = 0;
    int n = gifts.size();
    int i;
    while (k > 0)
    {
        for (i = 0; i < n; i++)
        {
            if (nums < gifts[i])
            {
                nums = gifts[i];
                index = i;
            }
        }
        gifts[index] = sqrt(nums);
        nums = 0;
        k--;
    }
    for (int i = 0; i < n; i++)
    {
        // cout << gifts[i] << endl;
        sum += gifts[i];
    }
    return sum;
    }
};