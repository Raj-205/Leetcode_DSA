class Solution {
public:
    int ans(vector<int>num , int k){
        int n = num.size();
        int l=0,r=0,cnt=0;
        unordered_map<int , int>mpp;
        while(r<n){
            mpp[num[r]]++;
            while(mpp.size()>k){
                mpp[num[l]]--;
                if(mpp[num[l]]==0){
                    mpp.erase(num[l]);
                }
                l++;
            }
            cnt+= r-l+1;
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return (ans(nums,k)-ans(nums,k-1));  
    }
};