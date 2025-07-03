/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        Node* newNode = new Node(data);
        Node* temp = head;
        
        for(int i =0;i<pos && temp!=nullptr;i++){
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next!= nullptr){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        
        return head;
        
    }
};