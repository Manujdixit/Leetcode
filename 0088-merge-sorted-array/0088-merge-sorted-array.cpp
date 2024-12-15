// bruteforce - sort and merge
//  class Solution {
//  public:
//      void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//          for(int i=0;i<n;i++){
//              nums1[m+i]=nums2[i];
//          }

//         sort(nums1.begin(),nums1.end());
//     }
// };

// two pointer from start using extra array
//  class Solution {
//  public:
//      void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//          vector<int>mm(nums1.size());

//         int i=0,j=0;

//         while(i<m && j<n){
//             if(nums1[i]<nums2[j]){
//                 mm.push_back(nums2[j]);
//                 j++;
//             }
//             else{
//                 mm.push_back(nums1[j]);
//                 i++;
//             }
//         }

//         //copy remaining elements
//         while(i!=nums1.size()){
//             mm.push_back(nums1[i]);
//         }

//         while(j!=nums2.size()){
//             mm.push_back(nums2[j]);
//         }

//         for(int i=0;i<m;i++){
//             nums1[i]=mm[i];
//         }
//     }
// };

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, k=m+n-1;

        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
    }
};