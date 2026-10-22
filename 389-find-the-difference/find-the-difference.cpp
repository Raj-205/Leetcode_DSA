class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s.empty())return (t[0]);
        if(t.empty())return ' ';
        int n1 = s.size();
        int n2 = t.size();
        int i=0,j=0;
        while(i<n1&& j<n2){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
            return t[j];
            }
        }
        return t[n2-1];
    }
};