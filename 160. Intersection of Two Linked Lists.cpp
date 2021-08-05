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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * p = headA;
        int n1=0,n2=0;
        while( p)
        {
            p= p->next;
            n1++;
        }
        p =headB;
        while( p)
        {
            p= p->next;
            n2++;
        }
        if( n2> n1)
            swap(headA, headB);
        // assuming list 1 is greater than list 2;
        int k = abs( n2-n1);
        while(k--)
            headA= headA->next;
        while(headA && headB)
        {
            if( headA == headB )
                return headA;
            headA= headA->next;
            headB= headB->next;
        }
        return NULL;
    }
};
