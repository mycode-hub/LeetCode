/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        map<Node* , bool > m;
        while( p!= NULL)
        {
            m[p]= true;
            p = p->parent;
        }
        while( q != NULL)
        {
            if( m.find(q) != m.end())
                return q;
            q = q->parent;
        }
        return NULL;
    }
};
