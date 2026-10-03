class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int idex = abs(nums[i])-1;
            if(nums[idex]>0){
                nums[idex] = - nums[idex];
            }
        }
        for( int i=0;i<n;i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
       return ans;
    }
};