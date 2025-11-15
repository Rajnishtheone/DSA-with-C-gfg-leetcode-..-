// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int>fib;
        if(n>=1)fib.push_back(0);
        if(n>=2)fib.push_back(1);
        for(int i=2;i<n;i++){
            fib.push_back(fib[i-1]+fib[i-2]);
        }
        return fib;
    }
};