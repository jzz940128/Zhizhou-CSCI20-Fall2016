 /* Lab16 -parallel array
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   11/01/2016
   Description: 
   Create a menu program, the menu must 
   have 10 differents items for users to choose. Allow user to choose
   when they want to quit, list all the items that user chose.
   list all the items with prices, and inventory(availiable in stock).
   At the end, list users' requests and inventory.
   */
#include<iostream>
#include<string>
using namespace std;

int main() {
    int count = 0;// to store how many items user picks 
//array of avaiible in the inventory   
int inventory[10];
    inventory[0] = 50;
    inventory[1] = 20;
    inventory[2] = 20;
    inventory[3] = 20;
    inventory[4] = 20;
    inventory[5] = 50;
    inventory[6] = 20;
    inventory[7] = 20;
    inventory[8] = 40;
    inventory[9] = 20;
// array of a list of prices    
float price[10];
    price[0] = 1.2;
    price[1] = 9.99;
    price[2] = 5.99;
    price[3] = 9.99;
    price[4] = 2.99;
    price[5] = 3.25;
    price[6] = 1.29;
    price[7] = 6.99;
    price[8] = 1.00;
    price[9] = 3.00;
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
//loop to list all the products with price and the inventory
for(int j =0; j<10; j++){
    cout<<j<<": "<<item[j]<<" $"<<price[j]<<"  availiable in stock ---"<<inventory[j]<<endl;
}
    //another array to store and list what items in the cart(user requests)
    string requests[99]; 
   
    //tell user how to pick items
    cout<<"please enter the number of item(0 - 9) to add items to your cart,"<<endl;
    cout<<"or enter a number bigger or equal than 10 to quit"<<endl;
   
    int user =0;// store the user's choice
    cin>>user;
    // cost to store and count the total amount that user need to pay
    float cost =price[user];// store the first item's cost
    float total_amount = 0; // to store the final total amount
    //inventory  
    inventory[user] - 1;// the item in the inventory subtract 1 by user picked 1
    // a while loop to ask user keep picking items something till user enter a number >= 10 to quit
    while (user < 10 ) {
        
        cout<<"You add a: "<<item[user]<<"---$"<<price[user]<<" to your cart."<<endl;// tell user he picked a item to shopping cart and the price of it
       
        requests[count] = item[user];//store the user's choice to the cart
    
        count++;// count how items user picked
        

    inventory[user] = inventory[user] - 1;// item in the inventory subtact 1 on every match of user adding new item.
    cout<<"your current total amount is : $"<<cost<<endl;
    cout<<"please enter number(0-9) to keep shopping or (10)quit"<<endl;
    cin>>user;
    cost = cost + price[user];//count and store the current total cost
    
    }
    total_amount = cost;// assign the total cost to total amount
     int i =0;// variable for a for loop condition
     
     // out put the list of user's shopping cart
    if(count>0) { 
    cout<<"you have "<<count<<" items in cart"<<endl;
    cout<<"Items in cart: "<<endl;
    for(i = 0; i<=count; i++){
       cout<<requests[i]<<endl;
    }
    //output the total amount
    cout<<"your total amount is: $"<<total_amount <<endl;
     }
   
   //output when user buy nothing 
    else{
        cout<<"Nothing in your cart"<<endl;
    }
    //list the inventory
    cout<<"Thanks for shopping, here is the menu of availiable products:"<<endl;
    cout<<"-----------------Inventory-----------------------------"<<endl;
    for(int k = 0; k<10; k++ ){
        cout<<"Product:"<<item[k]<<" : "<<inventory[k]<<" availiable in stock"<<endl;
    }
    return 0;
     }    
     