class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int longest=1;
        unordered_set<int>st;int x=0,count=0;

        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it :st){
            //to find if number is starting point
            if(st.find(it-1)==st.end()){
                 x=it;
                 count=1;
            }

            while(st.find(x+1)!=st.end()){
                x=x+1;
                count++;
            }
            longest=max(longest,count);
        }

        return longest;

        
    }
};