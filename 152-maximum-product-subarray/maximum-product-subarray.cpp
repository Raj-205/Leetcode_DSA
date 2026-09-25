class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int perifx=1;
        int suffix=1;
        for(int i=0;i<n;i++){
            perifx= (perifx==0?1:perifx)*nums[i];
            suffix=(suffix==0?1:suffix)*nums[n-i-1];  
        
         maxi =max( maxi,max(perifx,suffix));
        }
        return maxi;
    }
};