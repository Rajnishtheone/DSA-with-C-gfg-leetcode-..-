//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here if n == 1:
           
        int i=1,n=arr.size();
        if(n==1)
        {
            return 0;
        }
        if(arr[0]>=arr[1])
        {
             return 0;
        }
        if(arr[n-1]>=arr[n-2])
        {
             return n-1;
        }
        while(i<n-1)
        {
        if(arr[i-1]<=arr[i]&&arr[i]>=arr[i+1])
        {
             return i;
        }
        i++;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int A = ob.peakElement(a);
        int n = a.size();
        bool f = 0;
        if (A < 0 and A >= n)
            cout << 0 << endl;
        else {
            if (n == 1 and A == 0)
                f = 1;
            else if (A == 0 and a[0] >= a[1])
                f = 1;
            else if (A == n - 1 and a[n - 1] >= a[n - 2])
                f = 1;
            else if (a[A] >= a[A + 1] and a[A] >= a[A - 1])
                f = 1;
            else
                f = 0;
            if (f)
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends