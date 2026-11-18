class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        std ::sort(position.begin(), position.end());
        int n = position.size();
        int low = 1;
        int high = *max_element(position.begin(),position.end())- *min_element(position.begin(),position.end());
        while( low<=high){
            int mid = low + ( high -low)/2;
            int bolls=1;
            int last = position[0];
            for(int i=1;i<n;i++){
                if(position[i] - last >= mid){
                   bolls++;
                   last = position[i];
                }
            }
            if(bolls>=m){
                low = mid+1; 
            }
            else{
                high = mid-1;
            }
            
        }
        return high;
    }
};