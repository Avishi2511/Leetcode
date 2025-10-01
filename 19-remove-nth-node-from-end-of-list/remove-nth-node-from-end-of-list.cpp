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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* delt = curr->next;
        int count = 0;

        while(curr!=NULL){
            curr = curr->next;
            count++;
        }

        if (n == count) return head->next;

        curr = head;
        ListNode* head2 = curr;
        
        for(int i=1;i<count-n;i++){
            curr = curr->next;
        }

        if(curr->next!=NULL) curr->next = curr->next->next;

        return head2;
    }
};