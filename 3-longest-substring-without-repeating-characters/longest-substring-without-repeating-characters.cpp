class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        std::unordered_map<char,int>mpp;
        int l =0;
        int r =0;
        int maxlen = 0;
        int len =0;
        while(r<n){
            if( mpp.count(s[r])&& mpp[s[r]]>=l){
                l= mpp[s[r]]+1;
            }
            len = r-l+1;
            maxlen = max(maxlen,len);
            mpp[s[r]]= r;
            r++;
        }
       return maxlen; 
    }
};