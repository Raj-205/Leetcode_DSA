class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int n = intervals.size();
       sort(intervals.begin(), intervals.end());
       vector<vector<int>>ans;
       for(int i=0;i<n;i++){
        if(ans.empty()){
            ans.push_back(intervals[i]);
        }
        else{
            vector<int> &y = ans.back();
            int end = y[1];
            if(intervals[i][0]<= end){
                y[1] = max(intervals[i][1],y[1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        
       }  
       return ans;
    }
};