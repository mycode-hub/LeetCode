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
    ListNode* insertionSortList(ListNode* head) {
        ListNode * dummy = new ListNode(INT_MIN);
        ListNode* prev = dummy, *curr =head,*next;
        while(curr)
        {
            prev = dummy;
            
            while( prev->next && prev->next->val < curr->val)
                prev= prev->next;
            next = curr->next;
            curr->next = prev->next;
            prev->next = curr;
            curr = next;
            
        }
        return dummy->next;
    }
};
