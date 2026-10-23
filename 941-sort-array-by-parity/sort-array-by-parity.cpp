class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for (int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
                nums[i]=0;
            }
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};