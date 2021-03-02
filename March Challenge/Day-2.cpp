class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=1;i<=n;i++){
            k=k^(i^nums[i-1]);
        }
        int rightBit=k&~(k-1);
        
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++){
            if(nums[i]&rightBit){
                xor1^=nums[i];
            }
            else{
                xor2^=nums[i];
            }
        }
        
        for(int i=1;i<=n;i++){
            if(i&rightBit){
                xor1^=i;
            }
            else{
                xor2^=i;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]==xor1){
              ans.push_back(xor1);
              ans.push_back(xor2);
                return ans;
            }
        }
        if(ans.size()==0){
            ans.push_back(xor2);
            ans.push_back(xor1);
        } 
        return ans;
    }
};
