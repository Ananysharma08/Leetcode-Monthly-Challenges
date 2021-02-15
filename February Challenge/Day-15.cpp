class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         vector<pair<int,int>> vect;
        for(int i=0;i<mat.size();i++)
        {
            int tmp=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    tmp+=1;
                }
            }
            vect.push_back({tmp,i});
        }
        sort(vect.begin(),vect.end());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(vect[i].second);
        }
        return ans;
    }
};
