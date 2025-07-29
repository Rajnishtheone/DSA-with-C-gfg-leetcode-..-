class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int>s;
        int actualsum=0,expectedsum=0;
        int a;int b;
        int n = grid.size(); 
        for(int i= 0 ;i<n;i++){
            for(int j=0;j<n;j++){
            actualsum+=grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
              a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
          }

          expectedsum = (n*n)*(n*n+1)/2;
          
        b=expectedsum-actualsum+a;

        ans.push_back(b);

        return ans;
    }
};