#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int min;
        int operation = 0;
        // while(nums.size() > 0){
            min = *min_element(nums.begin(), nums.end());
            for(int i = 0 ; i < nums.size();i++){
               if(nums[i] != 0){
                        nums[i] = nums[i]-min;
               }
               else if(nums[i] == 0){
                  nums[i] = 0;
               } 
            }
            operation++;
        // }
        return operation;
    }
};
int main(){
  Solution s1;
  vector<int> input;
  int a;
  for(int i = 0;i<input.size();i++){
   cin >> a;
   input.push_back(a);
  }
  cout << s1.minimumOperations(input);


    return 0;
}