// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> hash(n + 1, 0);
//         for(int i=0;i<n;i++){
//             hash[nums[i]]++;
//         }
//         for(int i=0;i<=n;i++){
//             if(hash[i]==0)return i;
//         }
//             return -1;
//     }
// };


// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int sum=n*(n+1)/2;
//         int sum2=0;
//         for(int i=0;i<n;i++){
//             sum2+=nums[i];
//         }
//         int missing=sum-sum2;
//         return missing;
//     }
// };


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1=0;int xor2=0;
        for(int i=0;i<n;i++){
            xor1^=nums[i];
        }
        for(int i=0;i<=n;i++){
            xor2^=i;
        }
        int missing=xor1^xor2;
        return missing;
    }
};