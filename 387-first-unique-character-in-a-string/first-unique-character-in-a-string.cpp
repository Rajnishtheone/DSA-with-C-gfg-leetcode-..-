class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> umap;

        for(int i = 0; i < s.size(); ++i){
            if(umap.find(s[i]) != umap.end()){
                umap.find(s[i])->second ++;
            
            }
            umap.insert({s[i], 1});
            
        }

        for(int i = 0; i < s.size(); ++i){
            if(umap.find(s[i])->second == 1){
                return i;
            }
        }

        return -1;



    }
};