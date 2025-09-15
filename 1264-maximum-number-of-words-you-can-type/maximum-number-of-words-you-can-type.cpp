class Solution {
public:
    int canBeTypedWords(string text, string br) {
        unordered_set<char>broken(br.begin(),br.end());

        int count = 0;

        stringstream ss(text);

        string word;

        

        while(ss >> word){
            bool valid =true;
            for(char i : word ){
                if(broken.count(i)){
                    valid = false;
                    break;
                }
            }

            if(valid){
                count++;
            }
        }

        return count;
    }
};