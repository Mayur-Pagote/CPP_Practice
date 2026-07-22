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
ListNode* getNode(ListNode* head, int idx){
    ListNode* temp = head;
    for (int i = 1; i < idx; i++){
        temp=temp->next;
    }
    return temp;
} 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==NULL || head->next == NULL) return head;
        int length = 0;
        ListNode* temp = head;
        while (temp != NULL){
            temp = temp->next;
            length += 1;
        }

        int i = 1;
        int j = length;

        while (i < j){
            ListNode* a = getNode(head,i);
            ListNode* b = getNode(head, j);

            int t = a->val;
            a->val = b->val;
            b->val = t;
            i++;
            j--;
        }
        return head;
    }
};
