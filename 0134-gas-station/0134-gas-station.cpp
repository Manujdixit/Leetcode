class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if (accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0)) 
            return -1;

        int total = 0, start = 0, current = 0;
        for (int i = 0; i < gas.size(); ++i) {
            current += gas[i] - cost[i];
            if (current < 0) {
                current = 0;
                start = i + 1;
            }
        }
        return start;
    }
};
