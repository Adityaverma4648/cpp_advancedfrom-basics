#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){               // 1 - 
          for (int j = i; j < n; j++){          // 2
               cout << "*" << " ";              // 3
          }                                     // 4
          cout << endl;                         // 5
    }
    

    return 0;
}