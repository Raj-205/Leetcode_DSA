class Solution {
public:
int check(char i){
    if(i== 'I') return 1;
    if(i== 'V') return 5;
    if(i== 'X') return 10;
    if(i== 'L') return 50;
    if(i== 'C') return 100;
    if(i== 'D') return 500;
    if(i== 'M') return 1000;
    return 0;
}
    int romanToInt(string s) {
        int ans=0;
        int i=0;
      for(char ch : s){
        int res = check(ch);
          if(i+1 < s.size() && res < check(s[i+1])) {
                ans -= res; 
            } 
            else {
                ans+= res;
            }
            i++;
      } 
      return ans; 
    }
};