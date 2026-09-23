class Solution {
public:
    int addDigits(int num) {
        while (num>=10){
            int newnum=0;
            while(num!=0){
            int rem = num%10;
            newnum = newnum+rem;
            num/=10;
            }
            num = newnum;
        }
        return num;
    }
  
};