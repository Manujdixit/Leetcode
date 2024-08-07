class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // nikhil lohia
        int left = findLeftBound(nums, target);
        int right = findRightBound(nums, target);

        return {left, right};
    }
private:
    int findLeftBound(const vector<int>&nums, int target) {
        int index = -1, low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                index = mid;
                high = mid - 1;
            } else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return index;
    }

    int findRightBound(const vector<int>& nums, int target) {
        int index = -1, low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                index = mid;
                low = mid + 1;
            } else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return index;
    }
};