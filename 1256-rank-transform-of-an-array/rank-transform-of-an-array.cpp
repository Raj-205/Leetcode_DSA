class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy;
        int n = arr.size();
        for(int i=0;i<n;i++){
            copy.push_back(arr[i]);
        }
        sort(arr.begin(),arr.end());
        std::map<int,int>mpp;
        int rank=1;
        for(int i=0;i<n;i++){
            if(mpp.find(arr[i])==mpp.end()){
                mpp[arr[i]] = rank++;
            }
        }
        for( int i=0;i<n;i++){
           copy[i]= mpp[copy[i]];
        }
        return copy;   
    }
};