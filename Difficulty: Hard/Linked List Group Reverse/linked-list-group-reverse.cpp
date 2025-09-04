class Solution {
  public:
    Node* reverseKGroup(Node* head, int k) {
        if (head == NULL || k == 1) return head;

        Node* curr = head;
        int count = 0;

        // Step 1: Count k nodes
        while (curr != NULL && count < k) {
            curr = curr->next;
            count++;
        }

        // Step 2: If we have k nodes, reverse them
        if (count > 0) {
            curr = head;
            Node* prev = NULL;
            Node* next = NULL;
            int temp = 0;

            while (curr != NULL && temp < k) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                temp++;
            }

            // Step 3: head is now the tail of the reversed segment
            // Recursively call for next part
            if (next != NULL)
                head->next = reverseKGroup(next, k);

            // prev is new head of the reversed segment
            return prev;
        }

        return head;
    }
};
