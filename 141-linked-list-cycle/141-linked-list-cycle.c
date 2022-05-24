/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    
    struct ListNode *p=head;
    struct ListNode *q=head;
        while(p && q && q->next)    
    {
        
        p=p->next;
        q=q->next->next;
            if(p==q)
            return true;
    }
    return false;
}