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
            ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry=0,count1=0,count2=0,sum=0;
      ListNode *p=l1,*q=l2;
        
      stack <int> num,num1,num2;
        while(p){
            count1++;
            num1.push(p->val);
            p=p->next;
        }
        while(q){
            count2++;
            num2.push(q->val);
            q=q->next;
        }
        while(!num1.empty() && !num2.empty()){
            sum=(num1.top()+num2.top()+carry)%10;
            num.push(sum);           
            carry=(num1.top()+num2.top()+carry)/10;
            
            num1.pop();
            num2.pop();
        }
        if(!num1.empty()){
            while(!num1.empty()){
                sum=(num1.top()+ carry)%10;
                carry=(num1.top()+ carry)/10;
                num.push(sum);
                num1.pop();
            }
        }
        else if(!num2.empty()){
            while(!num2.empty()){
                sum=(num2.top()+ carry)%10;
                carry=(num2.top()+carry)/10;
                num.push(sum);
                num2.pop();
            }
        }
        if(carry!=0){
            num.push(carry);
        }
        
        ListNode *h=(count1>count2)?l1:l2;
        ListNode *res=h,*o;
        while(h){
            h->val=num.top();
            num.pop();
            o=h;
            h=h->next;
        }
        if(!num.empty()){
            ListNode *a=  new ListNode;
            a->next=NULL;
            a->val=num.top();
            o->next= a;
        }
        return res;
    
    }
};