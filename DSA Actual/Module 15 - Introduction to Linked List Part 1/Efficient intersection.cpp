/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int findLength(ListNode* head){
    ListNode* temp = head;
    int size = 0;
    while (temp != NULL){
        size += 1;
        temp = temp->next;
    }
    return size;
}
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int headAsize = findLength(headA);
        int headBsize = findLength(headB);

        int absVal = abs(headAsize - headBsize);
        ListNode* temp1;
        ListNode* temp2;
        if (headAsize > headBsize){
            temp1 = headA;
            temp2 = headB;
        }
        else {
            temp2 = headA;
            temp1 = headB;
        }
        
        while (temp1 != NULL){
            if (absVal != 0){
                temp1 = temp1->next;
                absVal -= 1;
            }
            else{
                if (temp1==temp2) return temp1;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }

        }
        return NULL;
    }
};
