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
ListNode* mergeList(ListNode* list1, ListNode* list2){
    ListNode* temp = new ListNode();
        ListNode* head = temp;

        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while (temp1 != NULL && temp2  != NULL){
            if (temp1->val <= temp2->val){
                temp->next = temp1;
                temp1 = temp1->next;
            }
            else {
                temp->next = temp2;
                temp2 = temp2->next;
            }
            temp = temp->next;
            
        }
        if(temp1 == NULL) temp->next = temp2;
            
        else temp->next = temp1;
            
        return head->next;
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast  = head;

        while (fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* left = head;
        ListNode*  right = slow->next;
        slow->next = NULL;

        left = sortList(left);
        right = sortList(right);
        return mergeList(left,  right);

    }
};
