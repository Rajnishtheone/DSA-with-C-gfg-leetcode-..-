//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> f;  // To store the factorial numbers
        long long factorial = 1;
        long long i = 1;

        while (factorial <= n) {
            f.push_back(factorial);  // Add current factorial to the list
            i++;
            factorial *= i;  // Compute the next factorial
        }

        return f;
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
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends