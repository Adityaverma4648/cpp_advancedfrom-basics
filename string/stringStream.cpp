#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

// word count function
int countWords(string str){
     stringstream s(str);
     // same variable to stores words
     string word;
     int count = 0;
     while(s >> word){
        count++;
     }
     return count;
}
//  printing frequency of occurance 

 void printFrequency(string str){
      map <string,int>FW;

      stringstream ss(str);

      string word;

      while(ss >> word){
            FW[word]++;
      }

      map<string , int>::iterator m;
      for(m = FW.begin() ; m != FW.end() ; m++){
              cout << m->first << "->" << m->second << endl;
      }
 } 

int main(){
   // word count
string s = "geeks for geeks geeks contribution placements";
    cout << " Number of words are: " << countWords(s) << endl;
      printFrequency(s);
    return 0;
}