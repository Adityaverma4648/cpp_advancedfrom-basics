#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){

  string greeting ="hello";
  cout << greeting << endl;

//   concatenation----------------------------------------------
// normal addition
  string firstname = "Aditya";
  string lastname = "Verma";
  string fullname = firstname + " " + lastname;
  cout << fullname << endl;

// appending 

   string fullnameAppend = firstname.append(lastname);   cout << fullnameAppend << endl;
// ------------------------------------------------------------



// Length of  a string---------------------------------------------------------
   string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << txt.length();
    return 0;
}


// accessing strings------------------------------------------------------

string myString = "Hello";
