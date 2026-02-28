/* structure for a node
struct Node {
    int data;
    Node *left, *right;
    Node(int val) { data = val; left = right = NULL; }
}; */

vector<int> topView(Node* root) {
    // add your code here
    vector<int>result;
    if(!root) return result;

    map<int,int>mp;
    queue<pair<Node*,int>>q;

    q.push({root,0});

    while(!q.empty()){
        auto front=q.front();
        q.pop();

        Node* node=front.first;
        int hd=front.second;

        if(mp.find(hd)==mp.end()){
            mp[hd]=node->data;
        }

        if(node->left){
            q.push({node->left,hd-1});
        }

        if(node->right){
            q.push({node->right,hd+1});
        }
    }

    for(auto it:mp){
        result.push_back(it.second);
    }

    return result;
}