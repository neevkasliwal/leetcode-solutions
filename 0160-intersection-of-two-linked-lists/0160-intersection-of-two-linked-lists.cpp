/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1 = 0 , c2 = 0;
        for(ListNode * curr1 = headA ; curr1 != NULL ; curr1 = curr1->next){
            c1++;
        }

        for(ListNode * curr2 = headB ; curr2 != NULL ; curr2 = curr2 -> next){
            c2++;
        }

        int diff = abs(c1-c2);

        if(c1 > c2){
            for(int i = 0 ; i < diff ; i++){
                headA = headA->next;
            }
        }
        else{
            for(int i = 0 ; i < diff ; i++){
                headB = headB->next;
            }
        } 

        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }   
        return headA;

        
    }
};