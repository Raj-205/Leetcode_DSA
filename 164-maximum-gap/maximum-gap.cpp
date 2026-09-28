class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int i= 0;
        int j= 0;
        int ans = 0;
        while(i<n){
            j= i+1;
            if(j<n){
                int diff = nums[j]-nums[i];
                ans = max(ans,diff);
            }
            else{
                break;
            }
            i++;
            j++;
        }
       return ans; 
    }
};