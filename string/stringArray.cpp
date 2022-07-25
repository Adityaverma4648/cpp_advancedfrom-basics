#include<iostream>
#include<string>
#include<array>
#include<vector>


using namespace std;
int main(){
// creating arrays-------------------------------------------------------------------------------------------------------------------------- 


    //  1. using pointers

         // initalization of pointer arrays
    const char* color[4] = {"blue","red", "green", "white"};
         // traversing 
    //    for (int i = 0 ; i <= 4;i++){
    //       cout << color[i] << " ";
    //    }
    
    // 2. using 2d array 
      
      char colors[4][10] = {"blue" , "orange" , "yellow" ,"red"};
      // traversing 
    //    for (int i = 0 ; i < 4;i++){
    //               cout << colors[i] << " ";
    //    }

    // 3. using string class
      string mycolor[] = {"blue", "black","brown" ,"burgandy"};
    //   for (int i = 0; i < 4; i++){
    //          cout << mycolor[i] << " ";
    //   }

      // 4   using the vector class 
  
   vector <string> yourColor = {"blue" , "red" , "yellow" , "green"};
//    for (int i = 0; i < yourColor.size(); i++)
//    {
//       cout << yourColor[i] << " ";
//    }


   // 5 using the array class
   array <string , 4> allcolor = {"black","white","azure","abrakadabra"};
   for (int i = 0; i < allcolor.size(); i++)   {
                 cout << allcolor[i] << " ";
   }       
    return 0;
}