class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int s= operations.size();
        for(int i = 0; i<s;i++){
            if(operations[i]=="++X" || operations[i]=="X++"){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};