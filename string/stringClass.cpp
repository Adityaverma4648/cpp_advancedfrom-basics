#include<bits/stdc++.h>
using namespace std;
int main(){
     string str;
      getline(cin , str);
      cout << "str is taken via gteline syntax = " << str << endl;
      
      cout << "initial value = " << str << endl;
      str.push_back('U');
      cout << "after push_back = " << str << endl;
      cout << "before pop_back = " << str << endl;
      str.pop_back();
      cout << "after pop_back = " << str << endl;
 


    return 0;
}