class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        int sum1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                sum1 += 1;
                sum = max(sum, sum1);

            } else {
                sum1 = 0;
            }
        }
        return sum;
    }
};