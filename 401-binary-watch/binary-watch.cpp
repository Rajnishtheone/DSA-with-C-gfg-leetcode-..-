#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;
        
        // Iterate through every possible hour (0-11)
        for (int h = 0; h < 12; ++h) {
            // Iterate through every possible minute (0-59)
            for (int m = 0; m < 60; ++m) {
                // __builtin_popcount counts the number of set bits (1s) in an integer
                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
                    
                    // Format minutes with a leading zero if less than 10
                    string minuteStr = (m < 10) ? "0" + to_string(m) : to_string(m);
                    result.push_back(to_string(h) + ":" + minuteStr);
                }
            }
        }
        
        return result;
    }
};