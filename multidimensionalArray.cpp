#include<bits/stdc++.h>
using namespace std;
int main(){
   
   string num[3][4] = {
    {
           "a","b","c","d"
    },
    {
           "e","f","g","h"
    },
    {
          "i","j","k","l"
    }
   };
   // traversing multi dimensional array 

   for(int i = 0 ; i < 3; i++){
     for(int j= 0 ; j < 4; j++){
         cout << num[i][j] << "\t";
     }
    cout << "\n";
   }

  return 0;
}