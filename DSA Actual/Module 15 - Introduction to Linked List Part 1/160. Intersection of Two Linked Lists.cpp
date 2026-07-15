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
        ListNode* aptr = headA;
        while (aptr!=NULL){
            ListNode* bptr = headB;
            while (bptr != NULL){
                if (aptr== bptr) {
                    return bptr;
                }
                bptr = bptr->next;
            }
            aptr = aptr->next;
        }
        return aptr;
    }
};
