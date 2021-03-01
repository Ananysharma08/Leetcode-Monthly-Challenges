class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>m;
        for(auto x : nums){
            m[x]++;
        }
        auto it=m.begin();
        int ans=0;
        for(;it!=prev(m.end());it++){
            if(next(it)->first - it->first ==1 )
            ans=max(ans,(it->second + (next(it)->second)));
        }
        return ans;
    }
};
