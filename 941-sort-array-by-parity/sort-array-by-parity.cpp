class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int s=0;
        int n=arr.size();
        int e=n-1;
        while(s<e){
            if(arr[s]%2==0){
                s++;
            }
            else{
                swap(arr[s],arr[e]);
                e--;
            }
        }
        return arr;
    }
};  