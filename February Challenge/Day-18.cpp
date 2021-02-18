class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
     int count = 0;
        if(A.size()<=2)
            return 0;
    for(int i=0;i<A.size()-2;i++){
        int d=A[i+1]-A[i];
        for(int j=i+2;j<A.size();j++){
            if(A[j]-A[j-1]==d){
                count++;
            }
            else{
                break;
            }
        }
    }
        return count;   
    }
};
