#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        for(int i=0;i<nums.size();i++){
             if(nums[i] == target){
                 ans = i;      
             }
            else if(nums[i+1] > target && nums[i] < target){
               ans = i+1;
            }
        }
        return ans;
    }
};
int main(){
    int target = 2;
    vector<int> input{1,3,5,6};
    Solution s1;
   cout << s1.searchInsert(input,target);
    return 0;
}