/* 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
*/

int deepestLeavesSum(TreeNode* root) {
    // add your code here
    if(!root) return 0;

    queue<TreeNode*>q;
    q.push(root);
    int sum=0;
    while(!q.empty()){
        int size=q.size();
        sum=0;

        for(int i=0;i<size;i++){
            TreeNode* node=q.front();
            q.pop();

            sum+=node->val;

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
    return sum;
}