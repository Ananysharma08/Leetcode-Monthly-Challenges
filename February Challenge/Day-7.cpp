class Solution {
public:
    vector<int> shortestToChar(string S, char c) {
        set<int>s; 
        int currentMin(INT_MAX);
        vector<int>ans{};
        for(int i=0;i<S.length();i++) 
        if(S[i]==c) s.insert(i);
        for(int i=0;i<S.length();i++){
            for(auto x:s){
                if(abs(i-x)<currentMin) currentMin=abs(i-x);
            }
            ans.push_back(currentMin);
            currentMin=INT_MAX;
        }
        return ans;
    }
};
