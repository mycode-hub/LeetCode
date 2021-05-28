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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *p = l1, *temp; 
        while(p != NULL && l2 !=NULL)
        {
            int x  = p->val + l2->val + carry;
            p->val = x %10;
            carry = x/10;
            temp = p;
            p = p->next;
            l2 = l2->next;
        }
        if( p || l2)
        {
            if(l2)
                temp ->next  = l2;
            p = temp->next;
            while(p)
            {
                int x  = p->val +carry;
                p->val = x %10 ;
                carry = (x) / 10;
                temp = p;
                p=p->next;
                
            }
        }
        
        if( carry )
            temp->next = new ListNode(carry);
        return l1;
        
    }
};
