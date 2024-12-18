class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = findBound(nums, target, true);  
        int right = findBound(nums, target, false);

        return {left, right};
    }

private:
    int findBound(vector<int>& nums, int target, bool isLeft) {
        int a = 0, b = nums.size() - 1;
        int boundary = -1;

        while (a <= b) {
            int mid = a + (b - a) / 2;
            if (nums[mid] == target) {
                boundary = mid;
                if (isLeft) {
                    b = mid - 1;  
                } else {
                    a = mid + 1;  
                }
            } else if (nums[mid] < target) {
                a = mid + 1;
            } else {
                b = mid - 1;
            }
        }

        return boundary;
    }
};
