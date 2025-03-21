//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
       int n=arr.size();
       int s=0,e=n-1;
       int fl=-1;
       while(s<=e){
           int mid= (e+s)/2;
           
           if(arr[mid]<=x){
               fl=mid;
               s=mid+1;
           }
           else if(arr[mid]>x){
               e=mid-1;
               
           }
          
           
       }
       
       return fl;
       
     
        
        
    }
};



//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, x);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends