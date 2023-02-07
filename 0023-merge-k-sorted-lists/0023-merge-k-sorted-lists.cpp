class Solution {
    typedef pair<int, ListNode*> pi;
public:
    ListNode* mergeKLists(vector<ListNode*>&lists) {
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        ListNode *e=new ListNode(0),*s=e;
        
        for(auto i:lists){
            if(i!=NULL)pq.push({i->val,i});
        }
        while(!pq.empty()){
            e->next=pq.top().second;
            e=e->next;
            pq.pop();
            if(e->next!=NULL)pq.push({e->next->val,e->next}); 
        }
        return s->next;
    }
};