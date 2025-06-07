class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if(s.size() != goal.size()) return false;

        for(int i=0;i<n;i++){
            string temp = s + s;
            return (temp.find(goal) != string::npos);
        }
        return false;
    }
};