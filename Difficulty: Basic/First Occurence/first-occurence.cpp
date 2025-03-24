//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to locate the occurrence of the string x in the string s.
class Solution {
  public:
    int firstOccurence(string &txt, string &pat) {
       if(pat==txt)return 0;
        if(pat.length()>txt.length())return -1;
        for(int i=0;i<txt.length();i++){
            if(pat[0]==txt[i]){
                int ind=0;
                int ind1=i;
                while(pat[ind]==txt[ind1] and ind1<txt.length()){
                    ind++;
                    ind1++;
                }
                if(ind==pat.length())return i;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;

        cin >> a;
        cin >> b;
        Solution ob;
        cout << ob.firstOccurence(a, b) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends