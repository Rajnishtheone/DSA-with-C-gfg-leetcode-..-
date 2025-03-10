class Solution {
public:
    int countOfSubstrings(string word, int k) 
    {
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        int size = word.length();
        int unique_counter = 0;

        for (int i = 0; i < size; ++i) 
        {
            unordered_set<char> mpp;
            int count = 0;

            for (int j = i; j < size; ++j) 
            {
                if (vowel.find(word[j]) != vowel.end()) {
                    mpp.insert(word[j]);
                } else {
                    count++;
                }

                if (mpp.size() == 5 && count == k) {
                    unique_counter++;
                }
            }
        }

        return unique_counter;
    }
};