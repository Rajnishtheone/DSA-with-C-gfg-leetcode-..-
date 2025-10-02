class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drunk = numBottles;
        int empty = numBottles;
        
        while (empty >= numExchange) {
            // Exchange numExchange empty bottles for 1 full bottle
            empty = empty - numExchange + 1;
            drunk += 1;
            numExchange += 1;
        }
        
        return drunk;

    }
};