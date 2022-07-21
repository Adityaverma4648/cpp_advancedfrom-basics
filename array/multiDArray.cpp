#include<bits/stdc++.h>
using namespace std;
int main(){
//    initialization
int n;
cout << "The number of column and row" << endl;

cin >> n;

int a[n][n];
// inserting values 

for(int i = 1 ; i <= n; i++){
    for(int j = 1 ; j <= n ;j++){
            cin >> a[i][j];
    }  
}
// 
cout << "the inserted array is " << endl;

for(int i = 1 ; i <= n; i++){
    for(int j = 1 ; j <= n ;j++){
            cout << a[i][j] << " ";
    }  
    cout << "\n";
}


    return 0;
}