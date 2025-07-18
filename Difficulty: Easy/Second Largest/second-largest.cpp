//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
       int n=arr.size();
       int max1=-1,max2=-1;
       for(int i=0;i<n;i++){
           if(arr[i]>max1){
               max1=arr[i];
           }
    }
    
    for(int j=0;j<n;j++){
        if(arr[j]>max2 && arr[j]!=max1){
            max2=arr[j];
        }
    }
    return max2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends