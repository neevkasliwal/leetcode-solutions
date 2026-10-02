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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode * os = head , * oe = head , * es = head -> next , * ee = head -> next;
        

        ListNode * curr = head -> next ->next;

        while(curr != NULL){
            oe -> next = curr;
            oe = curr;
            curr = curr -> next;

            if(curr != NULL){
                ee -> next = curr;
                ee = curr;
                curr = curr -> next;
            }
        }

        
        oe->next = es;
        ee-> next = NULL;

        
    return os;
    }
    
    
};