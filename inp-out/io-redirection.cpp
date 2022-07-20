#include<iostream>
#include<fstream>
#include<string>

using namespace std;

 int main(){ 
    
           fstream file;
           file.open( "cout.txt" , ios::out);
           string line;

           // backupStram buffers
           streambuf* stream_buffer_cout = cout.rdbuf();
           streambuf* stream_buffer_cin = cin.rdbuf();


           streambuf* stream_buffer_file = file.rdbuf();

           cout.rdbuf(stream_buffer_file);
           cout << "This is written in io-redirect to  file" << endl;
           cout << "anything I write here prints in my txt file demn :)" << endl;

           cout.rdbuf(stream_buffer_cout);
           cout << "This is written to the screen" << endl;
           // error streams 
           
           file.close();

    return 0;
 }