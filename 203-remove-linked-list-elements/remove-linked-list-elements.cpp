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
/*
private:
    ListNode *remove(ListNode *root, int val){
        if(root->next->val==val){
            root->next->next=root->next;
        }
        return root;
    }
*/
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        
        //head = remove(head, val);

        //return removeElements(head->next, val);

        while (head != NULL && head->val == val) {
            head = head->next;
        }

        ListNode *root = head;
        while(root!=NULL&&root->next!=NULL){
            if(root->next->val==val){
                root->next=root->next->next;
            }
            else
                root=root->next;
        }

        return head;
    }
};