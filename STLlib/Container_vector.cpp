#include <bits/stdc++.h>
using namespace std;
int main(){
   // array , vector , deque , forward list, list - Sequence container

   // set, Map , multiset ,multimap - Associative container 

   // undordered set, unordered multiset , unordered map,unordered multimap

   //stack , queue , priority_queue - container adaptors

// 01                   array - static contiguous sequences 
 

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

    // 04. Using frant() and back()
    cout << "the first element of array arr[] is - " << arr.front() << endl;
    // back()
    cout << "the last element of array arr[] is - " << arr.back() << endl;     
     
    // 05. Using size() , max_size() 

    cout << "the size of array arr is - " << arr.size() << endl;
    cout << "the maximum size of array arr is - " << arr.max_size() << endl;    


    // 06. empty() - boolresults , fill() , swap()

    array <int , 0> arr2;
    if(arr2.empty()){
        cout << "Empty";
    }
    else 
        cout << "Non-Empty"; 
    array <int , 6> arr1;
    arr1.fill(0);
    cout << "Traversing after a fill implicit fun used" << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        /* code */
        cout << arr1[i] << " ";
    }
    cout << endl;


//  array conatiner ends here................





    return 0;
}