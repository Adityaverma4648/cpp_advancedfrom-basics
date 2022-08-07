#include<bits/stdc++.h>
using namespace std;
class Shop{
    int ItemID[100];
    int ItemPrice[100];
    int counter;
    public:
         void initCounter(void){
             counter = 0;
             }
         void getPrice(void);
         void setPrice(void);
         void displayPrice(void);

};

void Shop::getPrice(void){
    cout<<"Enter ID of Your item no"<<counter+1<<endl;
    cin>>ItemID[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>ItemPrice[counter];
}

void Shop::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of the item with ID"<<ItemID[i]<<"is"<<ItemPrice[i]<<endl;
    }
    
    
}
int main(){
Shop Dukaan;                // object of class Shop
Dukaan.initCounter();    // makes counter  = 0;
Dukaan.setPrice();
Dukaan.setPrice();
Dukaan.setPrice();
Dukaan.displayPrice();

    return 0;
}