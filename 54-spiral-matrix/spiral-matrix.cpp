// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         if (matrix.empty() || matrix[0].empty()) return ans;


//         int m = matrix.size();
//         int n = matrix[0].size();
//         int total_elements = m * n;

//         int startrow = 0;
//         int endrow = m - 1;
//         int startcol = 0;
//         int endcol = n - 1;

//         int count = 0;
//         while (count < total_elements) {
//             // starting row
//             for (int i = startcol; i <= endcol && count < total_elements; i++) {
//                 ans.push_back(matrix[startrow][i]);
//                 count++;
//             }
//             startrow++;

//             // ending col
//             for (int i = startrow; i <= endrow && count < total_elements; i++) {
//                 ans.push_back(matrix[i][endcol]);
//                 count++;
//             }
//             endcol--;

//             // ending row
//             for (int i = endcol; i >= startcol && count < total_elements; i--) {
//                 ans.push_back(matrix[endrow][i]);
//                 count++;
//             }
//             endrow--;

//             // startcol
//             for (int i = endrow; i >= startrow && count < total_elements; i--) {
//                 ans.push_back(matrix[i][startcol]);
//                 count++;
//             }
//             startcol++;
//         }
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        int top=0,bottom=m-1,left=0,right=n-1;

        vector<int> ans;

        while(top<=bottom && left<=right){

            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }top++;

            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }right--;


            if(top<=bottom){for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }bottom--;}

            if(left<=right){for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }left++;}
        }
    return ans;
    }
    
};