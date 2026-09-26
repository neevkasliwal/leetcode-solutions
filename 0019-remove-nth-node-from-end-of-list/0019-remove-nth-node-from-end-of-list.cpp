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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;
        ListNode * first = head;
        for(int i = 0 ; i < n ; i++){
            first = first -> next;
        }

        if(first == NULL){
            ListNode * temp = head;
            head = head ->next;
            delete temp;
            return head;
        }

        ListNode * second = head;
        while(first->next != NULL){
            second = second -> next;
            first = first-> next;
        }

        ListNode * temp = second ->next;
        second ->next = second->next->next;
        delete temp;

        return head;
    }
};