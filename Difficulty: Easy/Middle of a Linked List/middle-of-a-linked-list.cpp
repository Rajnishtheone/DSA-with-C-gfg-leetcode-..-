/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        if(!head)return -1;
        
        Node* slow = head;
        Node* fast = head;
        
        // for odd number of ll
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
           
                
            
        }
        
     return slow->data;
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};