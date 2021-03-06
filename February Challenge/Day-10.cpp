class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*> mp;
        Node* p=head;
        while(p){
            mp[p]=new Node(p->val);
            p=p->next;
        }
        p=head;
        Node* k=mp[p];
        while(p){
            mp[p]->next=mp[p->next];
            mp[p]->random = mp[p->random];
            p=p->next;
        }
        return k;
    }
};
