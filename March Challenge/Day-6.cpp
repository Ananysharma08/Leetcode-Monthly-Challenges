class Solution {
public:
        
int minimumLengthEncoding(vector<string>& W) {
        unordered_set<string> wset(W.begin(), W.end());
        for (string word : W)
            if (wset.find(word) != wset.end())
                for (int i = 1; i < word.length(); i++) 
                    wset.erase(word.substr(i));
        int ans = 0;
        for (string word : wset) ans += (word.size()+1);
        return ans;
    }
};
