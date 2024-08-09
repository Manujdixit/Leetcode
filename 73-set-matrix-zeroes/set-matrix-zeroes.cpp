class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bottom = m - 1, left = 0, right = n - 1;

        vector<pair<int, int>> ans;

        while (top <= bottom && left <= right) {

            for (int i = left; i <= right; i++) {
                if (matrix[top][i] == 0)
                    ans.push_back({top, i});
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                if (matrix[i][right] == 0)
                    ans.push_back({i, right});
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    if (matrix[bottom][i] == 0)
                        ans.push_back({bottom, i});
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    if (matrix[i][left] == 0)
                        ans.push_back({i, left});
                }
                left++;
            }
        }

        for (auto it : ans) {
            int row = it.first;
            int col = it.second;
            markRow(matrix, row, n);
            markCol(matrix, col, m);
        }
    }

    private:
        void markRow(vector<vector<int>> & matrix, int i, int n) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }

        void markCol(vector<vector<int>> & matrix, int j, int m) {
            for (int i = 0; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    };

