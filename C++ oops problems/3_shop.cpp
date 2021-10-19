#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    // Memory allocation using array
class Shop{
    private:
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void){
        counter=0;
    }
    void setPrice(void);
    void showPrice(void);
};
void Shop :: setPrice(void)
{
    cout<<"\nEnter the item id of item number with "<<counter+1<<" :";
    cin>>itemId[counter];
    cout<<"\nEnter the Price of item \n";
    cin>>itemPrice[counter];
    counter++;
}
void Shop :: showPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"\nThe item id : "<<itemId[i]<<" Price is: "<<itemPrice[i];
    }
}
int main(){
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.showPrice();
    return 0;
}