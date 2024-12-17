class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int maxi=0;

        for(auto it: st){

            if(st.find(it-1)==st.end()){
                int currentNum=it;
                int currentStreak=1;

                while(st.find(currentNum+1)!=st.end()){
                    currentNum++;
                    currentStreak++;
                }

                maxi= max(maxi,currentStreak);
            }
        }
        return maxi;
    }
};