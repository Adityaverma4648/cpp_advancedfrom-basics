#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

void numberinwords(int n){
       string number[] = {
          "one" , "two" , "three" , "four" ,"five" , "six" , "seven" , "eight" , "nine"
       };
       
       for(int i = 1 ; i < 9; i++){
            if(n == i){
                cout << number[i-1];
            }
       }
       if(n > 9){
           cout << "nine";
       }
}

void polarity(int n){
    if(n % 2 == 0){
        cout << "even";
    }
    else{
        cout << "odd";
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b ;
    if(a <= b){
       cin >> a >> b;
       numberinwords(a) ;
       cout << endl;
       numberinwords(b) ;
       cout << endl;
       polarity(a);
       cout << endl;
       polarity(b);
       
    }
    return 0;
}