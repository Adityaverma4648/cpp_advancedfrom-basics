#include<iostream>
#include<string>

// for using setprecision
#include<iomanip>

using namespace std;
int main(){
    // Data types------------------------------
            int intNum = 5;
            float floatNum = 23.67;
            double doubleNum = 456.2389;
            char charString = 'd';
            bool boolres = true;
            string stringName = "hello";
            cout << intNum << " " << floatNum << " " << setprecision(7) << doubleNum << " " << charString << " " << boolres << " " << stringName << endl;




            // using modifiers--------------------------

// character---------------------------------- 
            cout << "character" << endl;         
                 // range 0 to 255
            unsigned char unsignedchar = 'f'; 
                 // range -127 to 127
            signed char signedchar = 'E';
                 // range -127 to 127
                 cout << unsignedchar << " " << signedchar << endl;
            
//  integer----------------------------------
            cout << "integer number" << endl;         
              // range 10 digits 
            signed int signedInt = 1234567890;
              // range 10 digits (signed*2) 
            unsigned int unsignedInt = 1234567890;
              // short 5 digits
            short int shortInt = 12354;
              // long 20 digits   
            long int longInt = 123456789;
              // long long int 
            long long int longLongInt= 123456789012345;  
            cout << signedInt << " " << unsignedInt << " " << shortInt << " " << longInt << " " << longLongInt<< endl;


// double-------------------------------------
        cout << "double number" << endl; 
        double doubleNumber = 45.67894523;
        cout << setprecision(10) << doubleNumber << " ";

        long double longdoublenumber = 789.123456789012345;
        cout  << setprecision(19) << longdoublenumber << endl;
                        
    return 0;
}