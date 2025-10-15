// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        int n = s.length();
        string r;
        for(int i =0;i<n;i++){
            char c = s[i];
            if(c == 'a' ||c == 'e' ||c == 'i' || c =='o' ||c == 'u'||c == 'A' || c =='E' ||c == 'I' ||c == 'O' || c =='U')
        {
           continue; 
        }
            r.push_back(c);
        }
        return r;
    }
};