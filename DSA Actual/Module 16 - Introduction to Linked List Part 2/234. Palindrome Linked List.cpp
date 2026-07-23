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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = new ListNode(0);
        ListNode*  tempHead = temp;
        ListNode* check= head;

        while (check != NULL){
            temp->next = new ListNode(check->val);
            temp = temp->next;
            check = check->next;
            
        }
        temp->next = NULL;
        tempHead = tempHead->next;
        tempHead = reverseist(tempHead);
        ListNode* newTemp = head;
        while (newTemp != NULL && tempHead!= NULL){
            if (newTemp->val != tempHead->val) return false;
            newTemp = newTemp->next;
            tempHead = tempHead->next;
        }
        return true;
        
    }
};
