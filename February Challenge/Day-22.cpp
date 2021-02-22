class Solution {
public:
      bool isSubsequence(string a, string b) {
        int n = a.size(), m = b.size();
        int j = 0; // pointer pointing to a
        for(int i=0; i<m && j<n; i++) {
            if(a[j] == b[i])
                j++;
        }
        return (j==n);
    }
    string findLongestWord(string s, vector<string>& d) {
       string res = "";
        sort(d.begin(),d.end()); // we need to find the sorted subsequence
        for(int i=0; i<d.size(); i++) {
            if(res.size() < d[i].size() && isSubsequence(d[i],s))
                res = d[i];
        }
        return res;
    }
};
