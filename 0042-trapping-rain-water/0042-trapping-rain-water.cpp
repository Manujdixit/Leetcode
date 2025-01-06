class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0)return 0;
        vector<int>left(n,0),right(n,0);

        int temp=0;
        for(int i=0;i<n;i++){
            temp = max(temp, height[i]);
            left[i]=temp;
        }

        temp=0;
        for(int i=n-1;i>=0;i--){
            temp = max(temp, height[i]);
            right[i]=temp;
        }

        temp=0;
        for(int i=0;i<n;i++){
            temp+=(min(left[i],right[i])-height[i]);
        }

        return temp;      
    }
};