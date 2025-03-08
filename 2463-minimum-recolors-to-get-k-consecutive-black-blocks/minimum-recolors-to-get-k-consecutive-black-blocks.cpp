class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini=INT_MAX;
        int i=0,j=0;
        int count=0;
        int n=blocks.size();
        while(j<k){
            if(blocks[j] == 'W'){
                count++;
            }
            j++;

        
        }
        mini=min(mini,count);

        while(j<n){
            if(blocks[j]=='W'){
                count++;
            }
            if(blocks[i]=='W'){
                count--;
            }
            i++;j++;

            mini=min(mini,count);
            
        }
        return mini;
        

    }
};