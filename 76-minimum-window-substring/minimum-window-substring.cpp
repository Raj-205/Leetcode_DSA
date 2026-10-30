class Solution {
public:
    string minWindow(string s, string t) {
     int m = s.size();
     int n=  t.size();
     int l=0,r=0,Sindex=-1,cnt=0;
     int minlen= INT_MAX;
     unordered_map<char,int>mpp;
      for(char ch : t){
            mpp[ch]++;
        }
     while(r<m){
        if(mpp[s[r]]>0){ 
           cnt++;
           }
         mpp[s[r]]--;
        
        while(cnt==n){
            if(r-l+1< minlen){
                minlen = r-l+1;
                Sindex = l;
            }
            mpp[s[l]]++;
            if(mpp[s[l]]>0) cnt--;
            
            l++;
        }
        r++;
     }   
    return Sindex == -1
                ? ""
                : s.substr(Sindex, minlen);;
    }
};