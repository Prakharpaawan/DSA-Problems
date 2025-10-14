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
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *second = slow->next;  
        slow->next = nullptr;            

        ListNode *prev = nullptr;
        ListNode *curr = second;         

        while (curr != nullptr) {
            ListNode *nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        ListNode *first = head;
        ListNode *secondHalf = prev;  

        while (secondHalf != nullptr) {
            ListNode *firstNext = first->next;
            ListNode *secondNext = secondHalf->next;

            first->next = secondHalf;
            secondHalf->next = firstNext;

            first = firstNext;
            secondHalf = secondNext;
        } 
    }    
};
