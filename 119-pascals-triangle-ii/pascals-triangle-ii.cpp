class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>result;
        int row = rowIndex+1;
        if(row==1){
            return{1};
        }
        if(row==2){
            return{1,1};
        }
        else{
            long long ans=1;
            result.push_back(ans);
            for(int i=1;i<row;i++){
                ans*=(row-i);
                ans/=i;
                result.push_back(ans);
            }
        }
        return result;
    }
};