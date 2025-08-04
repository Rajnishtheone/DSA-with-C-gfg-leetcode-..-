class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>fruitscount;
        int start=0;
        int maxlen=0;
        for(int i=0;i<fruits.size();i++){
            fruitscount[fruits[i]]++;

            while(fruitscount.size() > 2){
                fruitscount[fruits[start]]--;
                if(fruitscount[fruits[start]]==0){
                    fruitscount.erase(fruits[start]);
                }
                start++;
            }
            maxlen = max(maxlen,i-start+1);
        }

        return maxlen;
    }
};