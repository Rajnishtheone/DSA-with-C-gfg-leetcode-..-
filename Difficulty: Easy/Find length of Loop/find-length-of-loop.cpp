/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow = head;
        Node* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast ){
                return countLength(slow);
            }
        }
        return 0;
        
    }
    
    int countLength(Node* loopNode){
        int count = 1;
        
        Node* temp = loopNode->next;
        
        while(temp != loopNode){
            count++;
            temp = temp->next;
        }
        return count;
    }
};