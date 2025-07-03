/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
         if (head == nullptr) return head;

        stack<int> st;

        // Store values in the stack
        ListNode* temp = head;
        while (temp != nullptr) {
            st.push(temp->val);
            temp = temp->next;
        }

        // Overwrite nodes with reversed values
        temp = head;
        while (temp != nullptr) {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }

        return head; // always return the new head!
    }
};