/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        // Naive Apporach
        struct ListNode* p = node;

        while(p->next->next != NULL) {
            p->val = p->next->val;
            p = p->next;
        }
        p->val = p->next->val;
        struct ListNode *temp = p->next;
        p->next = NULL;
        delete temp;


        // Better Approach
        // struct ListNode *temp;
        // temp = node->next;

        // node->val = node->next->val;
        // node->next = node->next->next;
        
        // delete temp;

    }
};