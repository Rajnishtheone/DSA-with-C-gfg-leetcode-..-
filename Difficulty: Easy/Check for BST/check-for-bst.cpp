class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool checkbst(Node* root , long minval , long maxval){
        if(root == NULL)return true;
        
        
        if(root->data <= minval || root->data >= maxval){
            return false;
        }
        
        
        return checkbst(root->left,minval,root->data) && checkbst(root->right,root->data,maxval);
        
    }
    
    
    bool isBST(Node* root) {
        // Your code here
         return checkbst(root,LONG_MIN ,LONG_MAX);
    }
};