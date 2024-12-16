class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // Count the number of times nums[i] > nums[i+1]

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            // If there are more than one "break points", the array isn't sorted
            // and rotated
            if (count > 1)
                return false;
        }

        return true;
    }
};