/*
Runtime: 8 ms, faster than 85.20% of C++ online submissions for Merge Two Sorted Lists.
Memory Usage: 14.7 MB, less than 95.62% of C++ online submissions for Merge Two Sorted Lists.
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
**/ 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* dummyHead = new ListNode();
        ListNode* current = dummyHead;
        
        while(l1 != nullptr && l2 !=nullptr){
            if (l1->val <= l2->val){
                current->next = l1;
                l1 = l1->next;
            }else{
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next; //very important concept
        }
        
        //if any l1 or l2 is an empty list ,append non-null list
        if(l1 != nullptr) current->next = l1; 
        if(l2 != nullptr) current->next = l2;
        
        return dummyHead->next;
    }
};

//Detail Video Explanation:
//https://leetcode.com/problems/merge-two-sorted-lists/discuss/1030369/Easy-to-Understand-or-Iterative-and-Recursive

/**
        l1
        |
        ˇ
    l1: []--->[]--->[]
    l2: []--->[]--->[]
        ^
        |
        l2
                    |>>>> real answer
    dummyHead ->[0]--->[]--->[]--->[]--->[]--->[]--->[]
      current ->    |
                    |
**/