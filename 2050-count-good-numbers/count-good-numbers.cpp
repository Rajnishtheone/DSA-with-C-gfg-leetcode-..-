class Solution {
public:
    const int MOD = 1e9+7;

    long long result(long long base , long long exp){
        long long res =1;
        base%=MOD;
        while(exp>0){
            if(exp % 2 == 1){
            res = (res * base)%MOD;
             
            }
            
                

            base = (base *base)% MOD;
            exp = exp/2;
        }

        return res;

    }





    int countGoodNumbers(long long n) {
        long long evencount = (n+1)/2;
        long long oddcount = n/2;

        long long evenways = result(5,evencount);

        long long oddways =  result(4,oddcount);

        return (evenways * oddways)%MOD;
    }
};