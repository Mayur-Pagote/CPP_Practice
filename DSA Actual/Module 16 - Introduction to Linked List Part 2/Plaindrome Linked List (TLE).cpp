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
    for (int i = 1; i<idx; i++){
        temp = temp->next;
    }
    return temp;
} 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;
        int j = 0;
        ListNode* temp = head;
        while (temp!=NULL){
            j +=1;
            temp = temp->next;
        }
        int i = 1;
        while (i < j){
            ListNode* num1 = getNode(head, i);
            ListNode* num2 = getNode(head, j);
            if (num1->val != num2->val) return false;
            i++;
            j--;
        }
        return true;

    }
};
