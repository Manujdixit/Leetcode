// brute force (tle)
//  class Solution {
//  public:
//      bool containsDuplicate(vector<int>& nums) {
//          int size=nums.size();
//          int duplicate=0;
//          for(int i=0;i<size-1;i++){
//              for(int j=i+1;j<size;j++){
//                  if(nums[i]==nums[j])return true;
//              }
//          }
//          return false;
//      }
//  };

// sort and check for duplicate
//  class Solution {
//  public:
//      bool containsDuplicate(vector<int>& nums) {
//          sort(nums.begin(),nums.end());
//          int n=nums.size();
//          for(int i=1;i<n;i++){
//              if(nums[i]==nums[i-1])return true;
//          }
//          return false;
//      }
//  };

// hash set
//  class Solution {
//  public:
//      bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int>set;
//         for(int num:nums){
//          if(set.count(num)>0){
//              return true;
//          }
//          set.insert(num);
//         }
//         return false;
//      }
//  };

// hash map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> set;
        for (int num : nums) {
            if (set[num] >= 1) {
                return true;
            }
            set[num]++;
        }
        return false;
    }
};