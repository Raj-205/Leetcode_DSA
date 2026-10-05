class Solution {
public:
    int check(char ch){
        if(ch=='(') return 1;
        if(ch==')') return -1;
        if(ch=='{') return 2;
        if(ch=='}') return -2;
        if(ch=='[') return 3;
        if(ch==']') return -3;
        return 0;
    }
    bool isValid(string s) {
        std::stack<char>str;
        int n = s.size();
        for(char ch: s){
           int res = check(ch);
           if(res > 0){
            str.push(ch);
           }
           else{
            if(str.empty()) return false;
            int top = str.top();
            str.pop();
            if(check(top)+ res!=0) return false; 
           }
        }
        return str.empty();
    }
};