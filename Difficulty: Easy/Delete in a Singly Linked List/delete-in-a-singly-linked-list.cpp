/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
         if (head == nullptr) return nullptr;

        // Special case: delete the first node
        if (x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;  // use delete not free
            return head;
        }

        Node* current = head;

        // Move to the (x-1)th node
        for (int i = 1; current != nullptr && i < x - 1; i++) {
            current = current->next;
        }

        // If position is more than number of nodes
        if (current == nullptr || current->next == nullptr) {
            return head; // do nothing if out of bounds
        }

        // Node current->next is the node to delete
        Node* temp = current->next;
        current->next = temp->next;

        delete temp;  // use delete instead of free

        return head;
    }
};