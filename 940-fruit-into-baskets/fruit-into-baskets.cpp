class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n= fruits.size();
        int r =0;
        int l=0;
        int maxcount =0;
        unordered_map<int,int>basket;
        while(r<n){
            basket[fruits[r]]++;
            if( basket.size()>2){
                basket[fruits[l]]--;
                if(basket[fruits[l]]==0){
                    basket.erase(fruits[l]);
                }
                l++;
            }
           maxcount = max(maxcount , r-l+1);
           r++;
        }
        return maxcount;
    }
};