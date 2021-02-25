class Solution {
public:
    int findUnsortedSubarray(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
            while(l<arr.size()-1 && arr[l]<=arr[l+1]){
                l++;
            }
            while(r>0 && arr[r]>=arr[r-1]){
                r--;
            }
            if(l==arr.size()-1 && r==0)return 0;
        
                for(int i=l;i<=r;i++){
                    mini=min(mini,arr[i]);
                    maxi=max(maxi,arr[i]);
                }
            
        while( l>0 && arr[l-1]>mini){
            l--;
        }
        while( r<arr.size()-1 && arr[r+1]<maxi ){
            r++;
        }    
        return r-l+1;
    }
};
