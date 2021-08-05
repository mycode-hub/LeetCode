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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head )
            return head;
        int n = 0 ;
        ListNode *temp = head;
        while(n < k && temp)
        {
            temp= temp->next;
            n++;
        }
        if( n < k )
            return head;
        ListNode * curr=head,*next, *prev = NULL;
   
        while(n-- && curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
        }
        head->next = reverseKGroup(next,k);
        return prev;
    }
};
