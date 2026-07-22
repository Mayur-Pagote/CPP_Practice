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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
        ListNode* sHead = small;
        ListNode* lHead = large;

        ListNode* temp = head;
        while (temp!=NULL){
            if (temp->val < x){
                small->next = temp;
                small  = small->next;
            }
            else{
                large->next = temp;
                large = large->next;
            }
            temp = temp->next;
        }
        large->next = NULL;
        small->next = lHead->next;
        return sHead->next;
    }
};
