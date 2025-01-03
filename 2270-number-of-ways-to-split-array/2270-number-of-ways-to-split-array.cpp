class Solution {
public:
int waysToSplitArray(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        v[i] = sum;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] >= (v[n - 1] - v[i]))
            count++;
    }

    return count;
}
};