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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;  // Empty list or single node is a palindrome
    
    // Step 1: Find the middle of the list using the fast and slow pointer technique
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Step 2: Reverse the second half of the list
    ListNode* prev = nullptr;
    ListNode* curr = slow;
    
    while (curr) {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    
    // Now 'prev' is the head of the reversed second half of the list.
    // Step 3: Compare the first half and the reversed second half
    ListNode* firstHalf = head;
    ListNode* secondHalf = prev;  // prev is the head of the reversed half
    
    while (secondHalf) {  // Compare until the end of the second half
        if (firstHalf->val != secondHalf->val) {
            return false;  // Not a palindrome if values don't match
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    
    return true;  // The list is a palindrome
    }
};