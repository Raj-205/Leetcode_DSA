class Solution {
public:
    int result(vector<int> arr){
        int n = arr.size();
        if(n==1){
            return (arr[0]);
        }
        else{
            vector<int>result1;
            for(int i=0;i<n-1;i++){
                int ele = ((arr[i]+arr[i+1])%10);
                result1.push_back(ele);
            }
            return result(result1);
        }
    } 
    int triangularSum(vector<int>& nums) {
        int sum=0;
        sum = result(nums);
        return sum;
    }
};