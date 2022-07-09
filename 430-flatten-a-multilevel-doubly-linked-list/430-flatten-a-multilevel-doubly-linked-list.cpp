/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
       struct Node *curr=head;
        while(curr)
        {
            
            if(curr->child)
            {
                struct Node *temp=curr->child;
                while(temp->next)
                {
                    temp=temp->next;
                }
                temp->next=curr->next;
                if(curr->next)
                    curr->next->prev=temp;
                curr->next=curr->child;
                curr->child->prev=curr;
                curr->child=NULL;
            }
            else
                curr=curr->next;
        }
        return head;
        
    }
};