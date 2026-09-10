class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     std::unordered_map<int,int>mpp;
      for(int i=0;i<nums.size();++i){
        int rest = target - nums[i];
        if(mpp.find(rest)!= mpp.end()){
            return {mpp[rest],i};
        }
        mpp[nums[i]]=i ;
      }
      return {};
    }
};