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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode* start = head;
        
        ListNode* step = head->next;

        while (step != NULL ){
            if (start->val == step->val){
                start->next = start->next->next;
                step = step->next;
            }
            else {
            start = start->next;
            step = step->next;
            }
        }
        return head;
    }
};
