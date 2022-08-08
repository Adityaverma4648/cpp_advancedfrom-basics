#include<bits/stdc++.h>
using namespace std;
int main(){
  // vector -  dynamic contiguous array

 
// 01. begin() , end(), rbegin() , rend(), cbegin() , cend(),crbegin() , crend().

vector <int> g1;

for(int i = 0 ; i < 6 ; i++){
    g1.push_back(2*i);
}
cout << "output of begin() and end()" << endl;
for(auto i = g1.begin() ; i != g1.end() ; i++){
    cout << *i << " ";
}
cout << "\n";
cout << "output of rbegin() and rend()" << endl;
for(auto i = g1.rbegin() ; i != g1.rend() ; i++){
    cout << *i << " ";
}
cout << endl;
// reversal of pushed array is the output by rbegin and rend -----------------------

cout << "output of cbegin() and cend()" << endl;
for(auto i = g1.cbegin() ; i != g1.cend() ; i++){
    cout << *i << " ";
}
cout << "\n";
cout << "output of crbegin() and crend()" << endl;
for(auto i = g1.crbegin() ; i != g1.crend() ; i++){
    cout << *i << " ";
}

// 02 . capacity as its dynamic thus can be altered anytime we req;

cout << "size = " << g1.size() << endl;
cout << "max_size = " << g1.max_size() << endl;
cout << "capacity = " << g1.capacity() << endl;
g1.resize(4);
cout << "Traversing after resizing : ";
for (auto i = g1.begin(); i != g1.end(); i++){
    cout << *i << " ";
}
cout << "\n";
cout << "empty = " << g1.empty() << endl;


//02  accessing elements in vector container----------
       // reference_operator(g) , front() , back() , at(g) , data()

       int* pos = g1.data();
        cout << *pos << endl;
        
// 03 modifires
    // assign() , push_back() , pop_back(), insert(), erase(), swap() , clear() , emplace() , emplace_back().

       vector<int> modifyTest;
       // inserts 5  times number 10
       modifyTest.assign(5,10);
       cout << "The vector elements are: ";
        for (int i = 0; i < modifyTest.size(); i++)
        cout << modifyTest[i] << " ";
       //pushback()
       modifyTest.push_back(15);
            cout << "The vector elements after pushback() are: ";
        for (int i = 0; i < modifyTest.size(); i++)
          cout << modifyTest[i] << " ";
    // pop_back
         modifyTest.pop_back();
          cout << "The vector elements after pop_back() are: ";
        for (int i = 0; i < modifyTest.size(); i++)
          cout << modifyTest[i] << " ";

          // insert()
        //  modifyTest.insert(3,89);
    return 0;
}

