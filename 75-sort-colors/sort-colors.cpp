class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int s = 0, e = n - 1, i = 0;
        while (i <= e) {
            if (arr[i] == 0) {
                swap(arr[i], arr[s]);
                i++;
                s++;
            } else if (arr[i] == 1) {
                i++;
            } else {
                swap(arr[i], arr[e]);
                e--;
            }
        }
    }
};