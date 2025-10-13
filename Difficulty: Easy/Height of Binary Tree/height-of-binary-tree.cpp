/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(!root)return -1;
        
        queue<Node*>q;
        int depth =0;
        q.push(root);
        while(!q.empty()){
            int levelsize = q.size();
            for(int i =0;i<levelsize;i++){
                Node* current = q.front();
                q.pop();
                
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
                
            }
            
            depth++;
        }
        
        return depth-1;
    }
};