

// class Codec {
// public:
//     void serializeHelper(TreeNode* root, string& result) {
//         if (!root) {
//             result += "null,";
//             return;
//         }
//         result += to_string(root->val) + ",";
//         serializeHelper(root->left, result);
//         serializeHelper(root->right, result);
//     }

//     string serialize(TreeNode* root) {
//         string result;
//         serializeHelper(root, result);
//         return result;
//     }

//     TreeNode* deserializeHelper(queue<string>& nodes) {
//         string val = nodes.front();
//         nodes.pop();

//         if (val == "null") return nullptr;

//         TreeNode* root = new TreeNode(stoi(val));
//         root->left = deserializeHelper(nodes);
//         root->right = deserializeHelper(nodes);
//         return root;
//     }

//     TreeNode* deserialize(string data) {
//         stringstream ss(data);
//         string token;
//         queue<string> nodes;

//         while (getline(ss, token, ',')) {
//             nodes.push(token);
//         }

//         return deserializeHelper(nodes);
//     }
// };