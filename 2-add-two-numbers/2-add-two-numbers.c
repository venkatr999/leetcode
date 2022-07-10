/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *t1=l1;
    struct ListNode *t2=l2;
    struct ListNode *head=NULL;
    struct ListNode *temp=NULL;
    int car=0;
   while(t1 || t2)
   {
       int sum=car;
       if(t1)
       {
           sum+=t1->val;
           t1=t1->next;
       }
       if(t2)
       {
           sum+=t2->val;
           t2=t2->next;
       }
        struct ListNode *newnode=(struct ListNode *)malloc(sizeof(struct ListNode));
   
       newnode->val=sum%10;
       newnode->next=NULL;
       if(sum>9)
           car=1;
       else
           car=0;
       if(head==NULL)
           head=newnode;
       if(temp!=NULL)
          temp->next=newnode;
       temp=newnode;
   }
    if(car>0)
    {
         struct ListNode *newnode=(struct ListNode *)malloc(sizeof(struct ListNode));

        newnode->val=1;
        newnode->next=NULL;
        temp->next=newnode;
    }
return head;
}