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
void rotateLL (ListNode*& head){
    if (head == NULL || head->next == NULL)
        return;

    ListNode* temp = head;

    while (temp != NULL){
        if (temp->next->next == NULL){
            ListNode* valTemp = temp->next;
            temp->next = NULL;
            valTemp->next = head;
            head = valTemp;
            break;
        }
        temp = temp->next;   
    }
}

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
        int length =0;
        ListNode* stemp = head;
        while (stemp!= NULL){
            length += 1;
            stemp = stemp->next;
        }
        k = k % length;

        for (int i = 0; i<k; i++){
            rotateLL(head);
        }
        return head;
    }
};
