class Solution {
public:
    vector<int>row(int row){
        vector<int>rows;
        int ans = 1;
        rows.push_back(ans);
        if(row==1){
          return rows;
        }
        for(int i=1;i<row;i++){
            ans*=(row-i);
            ans/=i;
            rows.push_back(ans);
        }
        return rows;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        int i=1;
        while(i<=numRows){
            result.push_back(row(i));
            i++;
        }
        return result;
    }
};