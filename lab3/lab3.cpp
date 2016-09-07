#include <iostream>
using namespace std;
/* Lab4 - Coinsmachine
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/05/2016
   Description: use operator to count how coins change to dollars.
   */
   
   int main() {
    // declare and initialize the variables   
       int CenttoChange =0; //How many cent user want to change to cash
       int quarters =0; // amount of the quarters on user's coins
       int centRemain =0;// the rest of cent except quarters
       int dimes =0; // amount of the dimes after quarters
       int nickels =0;// the amount of nickels after counting quarters and dimes 
       int pennies =0;// the amount of pennies after counting quarters and dimes and nickels
       
       float insert_cash =0.0;// the amount of cash instead of the coins of user's input
       float final_cash = 0.0; // amount of cash after the fees charge

       cout<<"Welcome to CoinStars, insert coins to change cash and it will charge 10.9% fees. "<<endl;
       cout<<"Please insert Coins: ";
       
       cin>>CenttoChange;//user's input 
       // computing quarters , dimes, nickels, pennies, and total cash
       quarters = CenttoChange / 25;
       centRemain = CenttoChange % 25;
       dimes = centRemain / 10;
       nickels = (centRemain % 10) / 5;
       pennies = (centRemain % 10) % 5;
       insert_cash = CenttoChange* 0.01;
       final_cash = insert_cash - (insert_cash * 0.109);
       
       // output what users get.
       cout<<"You have "<<quarters <<" quarters, "<<dimes<<" dimes,"<<endl;
       cout<<"and "<<nickels<<" nickels, and " << pennies <<" pennies."<<endl;
       cout<<"Your total is: "<<insert_cash<<" , and the amount after fees is: "<<final_cash<<". ";
     
       
       
       
       
       return 0;
   }