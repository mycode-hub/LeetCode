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
    ListNode *reverse(ListNode * head, int right)
    {
       ListNode * p = NULL, *r=NULL, *q=head;
        while(q && q->val != right)
        {
            r= q->next;
            q->next =p;
            p=q;
            q=r;
        }
        q->next =p;
        cout<<q->val<<" "<<p->val;
        head->next = r;
        return q;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if( !head )
            return head;
        ListNode* p = head, *q =NULL;
        while(left >1 )
        {
            q=p;
            p=p->next;
            left--;
            right--;
        }
        cout<<p->val;
        ListNode *con=q, *tail=p;
        ListNode* r=NULL;
        while(right--)
        {
            r = p->next;
            p->next =q;
            q=p;
            p=r;
        }
        if( con )
            con->next = q;
        else
            head =q;
        
        tail->next = p;
        return head;
    }
};
