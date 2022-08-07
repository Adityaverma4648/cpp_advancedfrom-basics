#include <bits/stdc++.h>
using namespace std;
int main(){
   // array , vector , deque , forward list, list - Sequence container

   // set, Map , multiset ,multimap - Associative container 

   // undordered set, unordered multiset , unordered map,unordered multimap

   //stack , queue , priority_queue - container adaptors

// 01                                      array
 

    array <int ,6> arr = {1,2,3,4,5,6};
    //operations


    // 01. traversing in array container using at()
    cout << "traversing using at() : -" << endl;
     for (int i = 0; i < arr.size(); i++)
     {
        /* code */
        cout << arr.at(i) << " ";  //at(position/indexes)
     }
     cout << endl;

    // 02. traversing in array container using get()
    cout << "traversing using get() : -" << endl;
    cout << get<0>(arr) << " " << get<1>(arr) << " " << get<2>(arr) << " " << get<3>(arr) << " " << get<4>(arr) << " " << get<5>(arr) << endl;   

    // 03. traversing in array container using operator[]
    cout << "traversing using operator[] : -" << endl;

    for(int j = 0 ; j < arr.size() ; j++){
       cout << arr[j] << " ";
    }
    cout << endl;
     
     



    return 0;
}