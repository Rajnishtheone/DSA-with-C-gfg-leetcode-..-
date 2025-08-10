class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        unordered_map<int,int>freq;
        for(int num : arr){
            freq[num]++;
        }
        
        int ans=INT_MIN;
        int maxfreq=0;
        for(auto &p : freq){
            int element = p.first;
            int count = p.second;
            
            if(count > maxfreq || (count == maxfreq && element > ans)){
                 maxfreq=count;
                 ans=element;
                
            }
        }
        
        return ans;
    }
};