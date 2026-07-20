#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* detectCycle(ListNode* head) {
    if (head == nullptr) return nullptr;

    ListNode *slow = head, *fast = head;

    // Detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Find cycle start
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }

    return nullptr;
}

int main() {
    int n;
    cin >> n;

    vector<ListNode*> nodes(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nodes[i] = new ListNode(x);
    }

    for (int i = 0; i < n - 1; i++) {
        nodes[i]->next = nodes[i + 1];
    }

    int pos;
    cin >> pos;

    if (pos != -1) {
        nodes[n - 1]->next = nodes[pos];
    }

    ListNode* ans = detectCycle(nodes[0]);

    if (ans)
        cout << ans->val;
    else
        cout << "null";

    return 0;
}
