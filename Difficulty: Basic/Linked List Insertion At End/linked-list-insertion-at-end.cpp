/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* newnode = new Node(x);
        
        if(head == nullptr){
            return newnode;
        }
        
        
        Node * temp = head;
        
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newnode;
        
        return head;
    }
};