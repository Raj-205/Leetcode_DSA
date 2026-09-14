class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        int longest = 0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            int x = it;
            if(st.find(it-1)== st.end()){
              int count = 1;     
            
            while(st.find(x+1)!= st.end()){
                count ++ ;
                x= x+1;
            }
            longest = max(longest , count);
        }
        }
        return longest;
    }
};