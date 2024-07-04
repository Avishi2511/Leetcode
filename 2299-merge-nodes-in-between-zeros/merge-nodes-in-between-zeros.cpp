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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* output = new ListNode();
        ListNode* curr = output;
        head = head->next;
        int sum = 0;
        while (head != nullptr) {
            if (head->val == 0) {
                curr->next = new ListNode(sum);
                curr = curr->next;
                sum=0;
            }
            sum += head->val;
            head = head->next;
        }
        return output->next;
    }
};