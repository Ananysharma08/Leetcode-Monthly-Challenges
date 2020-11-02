class Solution {
public:
    int getDecimalValue(ListNode* head) {
         int count=0,sum=0;
        ListNode *p=head,*q=NULL,*r=NULL,*f=head;      //REVERSING THE LIST
        while(p!=NULL){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            f=q;
        }
        while(f!=NULL){
        sum = sum + (f->val)*pow(2,count);             //CALCULATING DECIMAL NUMBER.
            f=f->next;
            count++;
        }
        return sum;
    }
};
