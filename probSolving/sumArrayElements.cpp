#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int simpleArraySum(int size,int a[]){
    int sum = 0;
    for(int i = 0;i < size ;i++){
        sum = sum + a[i];
    }
    return sum;
}

int main(){
    int n ;
    int arr[n];
    if( 0 < n && n <= 1000){
         cin >> n ;
        for(int i = 0;i < n ; i++){
            cin >> arr[i];
        }
        cout << simpleArraySum(n, arr);
    }
    return 0 ;
    
}
