class Solution {
public:
    int maxelerow( vector<vector<int>>& mat, int n , int mid){
        int maxelement =-1;
        int index =-1;
        for( int i=0;i<n ;i++){
            if( mat[i][mid]> maxelement){
                maxelement = mat[i][mid];
                index =i;
            }
        }
        return index;
    } 
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low =0;
        int high = m-1;
        while( low<= high){
            int mid = low + (high -low)/2;
            int row = maxelerow( mat , n , mid);
            int left = mid>0? mat[row][mid-1] : -1;
            int righ = mid <m-1? mat[row][mid+1] : -1;
            if(mat[row][mid]> left && mat[row][mid]> righ){
                return {row , mid};
            }
            else if(mat[row][mid]< righ){
                low = mid +1;
            }
            else{
                high =mid-1;
            }
        }
        return {-1,-1};
    }
};