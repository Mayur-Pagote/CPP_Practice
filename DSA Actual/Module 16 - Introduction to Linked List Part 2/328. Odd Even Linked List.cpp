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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode(0);
        ListNode* even = new ListNode(0);
        ListNode* oHead = odd;
        ListNode* eHead = even;
        ListNode* temp = head;
        int length = 1;
        while (temp != NULL){
            
            if (length % 2 ==0 ){
                even->next = temp;
                even = even->next;
            }
            else {
                odd->next = temp;
                odd = odd->next;
            }
            temp = temp->next;
            length += 1;
        }
        even->next = NULL;
        odd->next = eHead->next;
        return oHead->next;
    }
};
