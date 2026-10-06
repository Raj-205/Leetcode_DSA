class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();
        if(n1<n2){
            return -1;
        }
            int i =0;
            while(i<=n1-n2){
               int j=0;
               while(j<n2 && (haystack[i+j]== needle[j])){
                 j++;
                }
                if(j==n2){
                  return i;
                }
                
                i++;
            } 
            return -1;
    }
};