#include<bits/stdc++.h>
using namespace std;
int main(){
 
    // Input   
// 100.345 2006.008 2331.41592653498

int T;
cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
double a,b,c;
for(int i= 1 ;i <= T;i++){

           // cout << i << "\t";-------------------------------------------------------------------------------------------- loop testing

    cin >> a >> b>> c;
    // This code uses setiosflags to activate both the showbase and uppercase flags, with the same effect as if inserting the manipulators showbase and uppercase.
     cout << left << hex << showbase << nouppercase; 
     // left - orientation
     // nouppercase - Case Control for HEX Numbers
     // showbase - represents base in HEX

// project Idea - number convertor using js + HTML + BOOTSTARP

     cout << (long long) a << endl;

    //  2006.008
     cout.precision(2);    // prints only two decimal digits after decimal point
     // fixed  - helps in printing 6 digits after decimal point
     // setfill(char) - prints mentioned character
     // showpos - indicates polarity
     // setw is used to print anthing after mentioned space

            cout << showpos << fixed << setfill('_') << setw(15) << right;
            cout << b << endl;


    cout.precision(9);
    cout << noshowpos << uppercase << scientific << right;
    cout << c << endl;

}
    return 0;
}