/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int countNode(TreeNode* root){
        if(root == nullptr) return 0;

        int cnt = 1+countNode(root->left)+countNode(root->right);
        return cnt;
    }

    bool isCBT(TreeNode* root,int count,int idx){
        if(root==nullptr) return true;

        if(idx>=count) return false;

        else{
            bool left = isCBT(root->left,count,2*idx+1);
            bool right = isCBT(root->right,count,2*idx+2);

            return (left&&right);
        }

    }

    bool isCompleteTree(TreeNode* root) {
        return isCBT(root, countNode(root),0);
    
    }
};