//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        long long sum=0;
        
       for (long long i=1;i<=n;i++){
            sum +=i*i*i;
              
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends