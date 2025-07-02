// User function Template for C++

class Solution {
  public:
    // Function to insert a node at the begining of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        // Code here
        Node* newnode = new Node(x);
        
        if(head == nullptr) return newnode;
        
        newnode->next = head;
        
        head=newnode;
        return head;
    }
    
};