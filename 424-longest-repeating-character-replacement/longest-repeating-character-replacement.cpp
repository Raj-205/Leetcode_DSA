class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l=0;
        int r=0;
        int maxlen =0;
        int maxfre =0;
        unordered_map<char ,int>mpp;
        while(r<n){
            mpp[s[r]]++;
            maxfre = max(maxfre , mpp[s[r]]);
            while((r-l+1-maxfre)>k){
                mpp[s[l]]--;
                l++;
            }
            maxlen = max(maxlen , r-l+1);
            r++;
        }
       return maxlen; 
    }
};