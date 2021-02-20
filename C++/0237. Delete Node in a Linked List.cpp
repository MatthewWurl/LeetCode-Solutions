// Date: Feb. 20, 2021
// Runtime: 12 ms, faster than 88.39% of C++ online submissions for Delete Node in a Linked List.
// Memory Usage: 7.6 MB, less than 83.80% of C++ online submissions for Delete Node in a Linked List.

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
        ListNode* next = node->next;
        
        node->val = next->val;
        node->next = next->next;
        
        delete next;
    }
};
