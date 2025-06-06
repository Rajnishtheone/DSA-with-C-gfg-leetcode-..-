class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, char> ump; 
        for(int i = 0; i < s.size(); ++i){
            if(ump.find(s[i]) != ump.end()){
                if(ump[s[i]] != t[i]){
                    return false;
                }
            }
            
            ump[s[i]] = t[i];
        }

        unordered_map<char, char> umptemp;
        for(int i = 0; i < t.size(); ++i){
            if(umptemp.find(t[i]) != umptemp.end()){
                if(umptemp[t[i]] != s[i]){
                    return false;
                }
            }
            
            umptemp[t[i]] = s[i];
        }

        return true;


    }
};