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
    void reorderList(ListNode* head) {
        vector<int>vect;
        struct ListNode *temp=head;
        while(temp)
        {
            vect.push_back(temp->val);
            temp=temp->next;
        }
        struct ListNode *temp1=head;
        int n=vect.size();
        int i=0,j=n-1;
        for(int k=0;k<n/2;k++)
        {
            cout<<vect[i]<<" "<<vect[j];
            temp1->val=vect[i];
            temp1->next->val=vect[j];
            i++;
            j--;
            temp1=temp1->next->next;
        }
        if(n%2==1)
            temp1->val=vect[i];
    }
};