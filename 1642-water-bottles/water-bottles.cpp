class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;

        while(numBottles>=numExchange){
            int full = numBottles/numExchange;
            int empty = numBottles%numExchange;
            sum+=full;
            numBottles = full+empty;
        }

        return sum;
    }
};