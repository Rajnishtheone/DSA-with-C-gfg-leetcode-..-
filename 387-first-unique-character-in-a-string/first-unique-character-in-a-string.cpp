class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, pair<int, int>> umap;

        for(int i = 0; i < s.size(); ++i){
            if(umap.find(s[i]) != umap.end()){
                umap[s[i]].second ++;
            
            }
            else{
            umap[s[i]] =  {i, 1};
            }
        }

        for(int i = 0; i < s.size(); ++i){
        if(umap[s[i]].second == 1){
            return umap[s[i]].first; 
        }
        
        }

        return -1;



    }
};