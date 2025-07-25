class Solution {
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int inOrderSuccessor(Node *root, Node *x) {
        // Case 1: Node has right subtree
        if (x->right != NULL) {
            Node* curr = x->right;
            while (curr->left != NULL) {
                curr = curr->left;
            }
            return curr->data;
        }

        // Case 2: No right subtree
        Node *succ = NULL;
        while (root != NULL) {
            if (x->data < root->data) {
                succ = root;
                root = root->left;
            } else {
                root = root->right;
            }
        }

        return succ ? succ->data : -1;  // Return -1 if there is no successor
    }
};
