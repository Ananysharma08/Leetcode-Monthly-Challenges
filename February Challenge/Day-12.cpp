class Solution {
public:
    int ans(int n,int c){
        if(n==0){
            return c;
        }
        if(n&1)
            return ans(n-1,c+1);
        else return ans(n/2,c+1);
        
    }
    
    
    
    int numberOfSteps (int num) {
       int count=0;
       return ans(num,count); 
    }
};
