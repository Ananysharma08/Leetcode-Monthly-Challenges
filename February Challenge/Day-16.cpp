class Solution {
public:
    void solve(string s, int i, vector<string>& mp,string new1){
        if(i==s.length()){
            mp.push_back(new1);
            return;
        }
            
        
        if(s[i]>='0' && s[i]<='9'){
            new1+=s[i];
            solve(s,i+1,mp,new1);
        }
        else{
             solve(s,i+1,mp,new1+(char)tolower(s[i]));
             solve(s,i+1,mp,new1+(char)toupper(s[i]));
        }
        
    }
    
    vector<string> letterCasePermutation(string S) {
       int i=0;
        vector<string> mp;
        string new1;
        solve(S,i,mp,new1);
        return mp;
    }
};
