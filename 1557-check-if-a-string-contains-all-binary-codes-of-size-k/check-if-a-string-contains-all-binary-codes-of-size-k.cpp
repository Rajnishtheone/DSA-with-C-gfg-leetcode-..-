class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        int total = pow(2,k);
        if(n<total) return false;
        unordered_set<string> st;
        string str = "";
        for(int i = 0; i<k; i++){
            str.push_back(s[i]);
        }
        st.insert(str);
        for(int i = 1; i<n-k+1; i++){
            str.erase(0, 1);
            str.push_back(s[k+(i-1)]);
            st.insert(str);
        }
        if(total == st.size()){
            return true;
        }
        return false;

    }
};