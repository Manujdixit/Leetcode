//bruteforce - transpose,reverse
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();

//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }

//         for(int i=0;i<n;i++){
//             reverse(matrix[i].begin(),matrix[i].end());
//         }
//     }
// };



//layer by layer- watch neeetcode
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(),l=0,r=n-1;

        while(l<r){
            for(int i=0;i<r-l;i++){
               // Save the top-left value
                int topLeft = matrix[l][l + i];
                
                // Move bottom-left to top-left
                matrix[l][l + i] = matrix[r - i][l];
                
                // Move bottom-right to bottom-left
                matrix[r - i][l] = matrix[r][r - i];
                
                // Move top-right to bottom-right
                matrix[r][r - i] = matrix[l + i][r];
                
                // Place saved top-left value into top-right
                matrix[l + i][r] = topLeft;
            }
            // Move to the next inner layer
            ++l;
            --r;
        }
    }
};