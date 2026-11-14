class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int mid=0;
        if((long long )k*m>n)return -1;
        while (low<=high){
            mid= low+(high-low )/2;
            int count=0;
            int nofday =0;
            for(int i=0; i< bloomDay.size(); i++){
                if (bloomDay[i] <= mid) {
                    count++;
                    if (count == k) {
                        nofday++;
                        count = 0;
                    }
                } else {
                    count = 0;
                }
            }
            if(nofday<m){
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        }
        return low;
    }
};