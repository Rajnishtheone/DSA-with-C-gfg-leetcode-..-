/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
       if (head == nullptr) return head; // empty list

        // If deleting the first node (head)
        if (x == 1) {
            Node* temp = head;
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete temp;
            return head;
        }

        // Traverse to the x-th node (1-based)
        Node* curr = head;
        for (int i = 1; i < x && curr != nullptr; i++) {
            curr = curr->next;
        }

        // If position x is out of bounds
        if (curr == nullptr) return head;

        // Re-link previous and next nodes
        if (curr->prev != nullptr) {
            curr->prev->next = curr->next;
        }
        if (curr->next != nullptr) {
            curr->next->prev = curr->prev;
        }

        delete curr;
        return head;
    }
};