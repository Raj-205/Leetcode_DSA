class Solution {
public:
    string multiply(string num1, string num2) {
       int n1 = num1.size();
       int n2 = num2.size();
       vector<int> ans (n1+n2,0);
       for(int i = n1-1 ; i>=0;i--){
        for(int j =n2-1;j>=0;j--){
            int multi = (num1[i]-'0')*(num2[j]-'0');
            int s = i+j;
            int c = i+j+1;
            int sum = multi + ans[c];
            ans[c]= sum%10;
            ans[s]+=sum/10;
        }
       }
       string str ="";
       for( int x:ans){
        if(!(str.empty()&& x==0)){
            str+=to_string(x);
        }
       }
       return str.empty()? "0":str;
    }
};