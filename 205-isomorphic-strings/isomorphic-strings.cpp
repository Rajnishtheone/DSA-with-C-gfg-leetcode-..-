class Solution {
public:
    bool isIsomorphic(string s, string t) {
     

        if(s.size() != t.size()) return false;

        unordered_map<char,char>mst;
        unordered_map<char,char>mts;

        for(int i=0;i<s.size();i++){
            char c1=s[i];
            char c2=t[i];

            //map s to t 

            if(mst.count(c1)){
                if(mst[c1] != c2) return false;
            }
            else{
                mst[c1]=c2;
            }

            //map t to s 

            if(mts.count(c2)){
                if(mts[c2] != c1) return false;
            }
            else{
                mts[c2]=c1;
            }
        }
        
        return true;
    }

};