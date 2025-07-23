// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
    while(root != NULL){
        if(root->data == x){
            return true;
        }
        if(x > root->data){
            root = root->right;
        }
        
        else{
            root = root->left;
        }
    }
    
    return false;
}