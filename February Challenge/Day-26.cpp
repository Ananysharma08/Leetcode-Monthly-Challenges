class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
      int size=popped.size();
      int j=0;
        stack<int>st;
      int i=0;
      while(i<size){
          st.push(pushed[i]);
          while(!st.empty() && j<size && st.top()==popped[j]){
              st.pop();
              j++;
          }
          i++;
      }
        return (j==size);
    }
};
