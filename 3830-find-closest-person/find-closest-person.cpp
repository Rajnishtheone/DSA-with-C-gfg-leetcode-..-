class Solution {
public:
    int findClosest(int x, int y, int z) {
        int temp1,temp2;

        temp2= abs (z-y);
        temp1=abs(z-x);
        // if(temp2  < 0){
        //      temp2=temp2*-1;
        // }

        // if(temp1 < 0){
        //      temp1=temp1*-1;
        // }



        if(temp1 > temp2){
            return 2;
        }
        else if(temp1 < temp2){
            return 1;
        }
        
            return 0;
        
    }
};