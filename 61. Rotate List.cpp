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
    ListNode* rotateRight(ListNode* head, int k) {
        if( !head)
            return head;
        int n = 1;
        ListNode* p= head;
        while( p->next)
        {
            n++;
            p = p->next;
        }
        p->next = head;
        k = k%n;
        k = n - k - 1;
        p = head;
        while( k-- )
        {
            p=p->next;
        }
        head = p->next;
        p->next = NULL;
        return head;
        
    }
};
