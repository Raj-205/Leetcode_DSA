class Solution {
public:
    int firstans(vector<int>&nums , int k, int n){
        int low =0, first =-1,high = n-1;
        int mid;
        while(low<= high){
            mid =  low + (high - low)/2;
            if(nums[mid]== k){
                first = mid;
                high = mid - 1;
            }
            else if ( nums[mid]> k){
                 high =mid -1;
            }
            else{
                low= mid +1;
            }
        }
        return first;
    }
     int lastans(vector<int>&nums , int k, int n){
        int low =0, last =-1,high = n-1;
        int mid;
        while(low<= high){
            mid =  low + (high - low)/2;
            if(nums[mid]== k){
                    last = mid;
                    low = mid + 1;
            }
            else if ( nums[mid]> k){
                 high =mid -1;
            }
            else{
                low= mid +1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        return {firstans(nums ,target ,n),lastans(nums,target ,n)};
    }
};