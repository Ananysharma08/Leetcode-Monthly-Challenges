class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* curr=head;
    vector<int> A;
    
    while(curr)
    {
        A.push_back(curr->val);
        curr = curr->next;
    }
    
    sort(A.begin(),A.end());
    
    curr=head;
    for (auto i:A)
    {
        curr->val=i;
        curr=curr->next;
    }
    
    return head;
    }
};