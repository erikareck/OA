/*
Runtime: 8 ms, faster than 95.06% of C++ online submissions for Remove Duplicates from Sorted List.
Memory Usage: 11.4 MB, less than 96.71% of C++ online submissions for Remove Duplicates from Sorted List.
*/
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
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* p = head;
        while (p != nullptr && p->next != nullptr){
            if (p->val == (p->next)->val) p->next = (p->next)->next;
            else p = p->next;   
        }
        return head;
    }
};
/*
Runtime: 8 ms, faster than 95.06% of C++ online submissions for Remove Duplicates from Sorted List.
Memory Usage: 11.6 MB, less than 84.45% of C++ online submissions for Remove Duplicates from Sorted List.
*/
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
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* p = head;
        int tmp = -1;
        while (p != nullptr && p->next != nullptr){
            if (p->val == (p->next)->val) p->next = (p->next)->next;
            else {
                tmp = (p->next)->val;
                p = p->next;
            }
        }
        return head;
    }
};
