/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
      for(int i=0;i< nums.size();i++){
        int counter=0;
        for(int j=i+1;j<nums.size();j++){
        if(nums[i]==nums[j]){
            counter++;
        }
        }
         if(counter==(nums.size())/2){
            return (nums[i]);
        }
      }
    return 0;
    }
};*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0, ele;
        for(int i=0;i<nums.size();i++){
            if(count==0){
             count++;
             ele= nums[i];
            }
            else if(nums[i]==ele){
                count++;
            }
            else{
                count--;
            }

        }
        return ele;
    }  
};