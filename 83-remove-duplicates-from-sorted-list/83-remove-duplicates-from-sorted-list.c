/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p=head;
    if(p==NULL)
        return p;
    while(p->next)
    {
        if(p->val==p->next->val)
        { 
        //struct ListNode *q=p->next;
        p->next=p->next->next;
          //  free(q);
        }
        else
            p=p->next;
            
    }
  return head;
}