class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>s;
        for(auto x: candyType){
            s.insert(x);
        }
        return (s.size()>candyType.size()/2)?candyType.size()/2:s.size();
            
    }
};