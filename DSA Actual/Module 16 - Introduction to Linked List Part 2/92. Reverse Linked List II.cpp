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
ListNode* joinList(ListNode* a, ListNode* b, ListNode* c) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    if (a) {
        head = a;
        tail = a;
        while (tail->next)
            tail = tail->next;
    }

    if (b) {
        if (!head) {
            head = b;
            tail = b;
        } else {
            tail->next = b;
            tail = b;
        }
        while (tail->next)
            tail = tail->next;
    }

    if (c) {
        if (!head)
            head = c;
        else
            tail->next = c;
    }

    return head;
}



ListNode*  reverseist(ListNode* head){
    if (head == NULL || head->next ==NULL) return head;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        ListNode* curr = head;
        ListNode* tempHead = curr;

        while (curr != NULL){
            Next = curr->next;
            curr->next = prev;
            prev=curr;
            curr=Next;
        }
        return prev;
} 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;
        ListNode* leftList = new ListNode(0);
        ListNode* leftHead = leftList;
        ListNode* midList = new ListNode(0);
        ListNode* midHead = midList;
        ListNode* rightList = new ListNode(0);
        ListNode* rightHead = rightList;

        ListNode* temp = head;
        int i = 1;
        while (temp!= NULL){
            if (i < left){
                leftList->next = new ListNode(temp->val);
                leftList= leftList->next;
            }
            else if (i >= left && i <= right){
                midList->next = new ListNode(temp->val);
                midList = midList->next;
            }
            else {
                rightList->next = new ListNode(temp->val);
                rightList = rightList->next;
            }
            temp = temp->next;
            i++;
        }

        leftHead= leftHead->next;
        midHead= midHead->next;
        midHead = reverseist(midHead);
        rightHead= rightHead->next;
        
        return joinList(leftHead, midHead, rightHead);
    }
};
