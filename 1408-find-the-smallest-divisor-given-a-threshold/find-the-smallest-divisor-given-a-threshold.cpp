class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            int Tsum =0;
            for(int i=0;i<n;i++){
                Tsum += (nums[i]+mid-1)/mid;
            }
            if(Tsum<= threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};