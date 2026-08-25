class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();

        if(n==1)return 0;

        int j=0;int cj=0;int mj=0;

        for(int i=0;i<n;i++){

          mj= max(mj,nums[i]+i);

          if(i==cj){
            cj=mj;
            j++;
          }

          if(cj>=n-1){
            return j;
          }


        }

        return j;
    }
};