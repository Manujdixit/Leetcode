class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int>arr(n,1);

        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]*nums[i-1];
        }

        int temp=1;

        for(int i=n-2;i>=0;i--){
            temp*=nums[i+1];
            arr[i]*=temp;
        }
        return arr;
    }
};