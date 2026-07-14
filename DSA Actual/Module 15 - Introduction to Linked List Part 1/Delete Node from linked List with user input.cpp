#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

void deleteNode(ListNode* node) {
    if (node == NULL || node->next == NULL)
        return;

    ListNode* temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
    delete temp;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    int n;
    cin >> n;

    if (n == 0)
        return 0;

    int x;
    cin >> x;
    ListNode* head = new ListNode(x);
    ListNode* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> x;
        tail->next = new ListNode(x);
        tail = tail->next;
    }

    int key;
    cin >> key;

    ListNode* node = head;
    while (node != NULL && node->val != key)
        node = node->next;

    if (node != NULL)
        deleteNode(node);

    printList(head);

    return 0;
}
