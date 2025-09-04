class Solution {
public:
    int fib(int n) {
        int sum=0;
        int first =0;
        int second =1;
        for(int i=0;i<n;i++){
            sum=first+second;
            first=second;
            second=sum;
        }
        return first;
    }
};