class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>ans(n , vector<int>(n));
      int val =1;
      int top =0;
      int bottom =n-1;
      int left =0;
      int right =n-1;
      while(left<=right && top<=bottom){
        for(int j =left;j<=right;j++){
            ans[top][j] =val++;
        }
        top++;
          for(int j = top;j<=bottom;j++){
            ans[j][right] =val++;
        }
        right--;
        if(top<=bottom){
          for(int j =right;j>=left;j--){
            ans[bottom][j] = val++;
        }
        bottom--;
        }
        if(left<=right){
          for(int j = bottom;j>=top;j--){
            ans[j][left] = val++;
        }
        left++;
        }
      } 
      return ans; 
    }
};