 /* Lab14 -Single dimesional array
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   10/26/2016
   Description: 
   Description of the program: Create a menu program, the menu must 
   have 10 differents items for users to choose. Allow user to choose
   when they want to quit, list all the items that user chose.
   */
#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;// to store how many items user picks 
   
   // create an array to list all the products
    string item[10];
    
    item[0] = "gum";
    item[1] = "reebokpant";
    item[2] = "reeboksock";
    item[3] = "whiteTshirt";
    item[4] = "LurenceMilk";
    item[5] = "Icecream";
    item[6] = "CheeseCake";
    item[7] = "reebokUnderwear";
    item[8] = "Taco";
    item[9] = "Burrito";
cout<<"--------------Menu-------------------"<<endl;
//loop to list all the products
for(int j =0; j<10; j++){
    cout<<j<<": "<<item[j]<<endl;
}
    //another array to store and list what items in the cart(user requests)
    string requests[99];
   
    //tell user how to pick items
    cout<<"please enter the number of item(0 - 9) to add items to your cart,"<<endl;
    cout<<"or enter a number bigger or equal than 10 to quit"<<endl;
   
    int user =0;// store the user's choice
    cin>>user;
    
    // a while loop to ask user keep picking items something till user enter a number >= 10 to quit
    while (user < 10 ) {
        cout<<"You add a: "<<item[user]<<" to your cart."<<endl;
       
        requests[count] = item[user];//store the user's choice to the cart
    
        count++;// count how items user picked
        

       cout<<"please enter number(0-9) to keep shopping or (10)quit"<<endl;
    cin>>user;
   
     
    }
     int i =0;// variable for a for loop condition
     
     // out put the list of user's shopping cart
   
    
    cout<<"There's nothing in your cart."<<endl;
    cout<<endl;
    cout<<"Items in cart: "<<endl;
    for(i = 0; i<=count; i++){
       cout<<requests[i]<<endl;
    }
    
    return 0;
     }    
     