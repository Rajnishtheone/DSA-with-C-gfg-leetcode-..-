/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  int count = 0;
  int result = 0;
  
  void largestgenerate(Node*root,int k){
      if(!root || count>=k){
          return;
      }
      
      
      largestgenerate(root->right,k);
      
      count++;
      if(count == k){
          result = root->data;
          return;
      }
      
      largestgenerate(root->left,k);
        
      
  }
    int kthLargest(Node *root, int k) {
        // Your code here
       
        largestgenerate(root,k);
        return result;
        
        
    }
};