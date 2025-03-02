class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<vector<int>> x;
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i][0] < nums2[j][0]) {
                x.push_back(nums1[i]);
                i++;
            } else if (nums1[i][0] > nums2[j][0]) {
                x.push_back(nums2[j]);
                j++;
            } else {
                nums1[i][1] += nums2[j][1];
                x.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        if (i < n1) {
            while (i < n1) {
                x.push_back(nums1[i]);
                i++;
            }
        }
        if (j < n2) {
            while (j < n2) {
                x.push_back(nums2[j]);
                j++;
            }
        }
        return x;
    }
};