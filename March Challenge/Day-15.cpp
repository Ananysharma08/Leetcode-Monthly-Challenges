class Solution {
   private:
    unordered_map<string, string> StoL; // map short url -> long url

public:
    string encode(const string& L) {
      string S = "http://tinyurl.com/" + to_string(hash<string>()(L));
      return StoL[S] = L, S;
    }

    string decode(const string& S) {
      return StoL.count(S)? StoL[S] : "";  
    }

};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
