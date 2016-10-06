/* Lab11 - Relation and Condition Operators
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   10/05/2016
   Description:Create a program will calculate tax,
               and amount owed or refund for couple or person
               take input information, and see if it will compute
               tax. And ouput all information
   */

#include<iostream>
#include<string>
using namespace std;


int main() {
/*declare the variables for input and output information
   First and Last name, Wages, Gross income, withheld etc.*/
string FilingStatus;
string first_name;
string last_name;
double Wages;
double GrossIncome =0.0; // your total income, in this program is equal to wages
double tax =0.0; // the total tax you should pay
double taxOwed;
int Withheld;
double refund; // the refund money from your tax

//ask user input information
cout<<"please fill your information on below: "<<endl;
cout<<"Please enter your first name: ";
cin>>first_name;
cout<<"Please enter your last name: ";
cin>>last_name;
cout<<"Please answer your FilingStatus(single or marriedd): ";
cin>>FilingStatus;
cout<<"Your Wages(Per month): ";
cin>>Wages;
cout<<"Your withHeld: ";
cin>>Withheld;
GrossIncome = Wages;

//if Gross income subract personal exemption and standar decuction excute following thing(computing their tax)
if (GrossIncome -( 3900 + 6100) > 0) {
  
  //the way computing tax, if the user is single count
  if(FilingStatus == "single"){
    if(GrossIncome <= 8925) {     //income between 0 - 8925
        tax = GrossIncome * 0.1;
    }
    else if(GrossIncome>8925 && GrossIncome<36250) {  //  $8925< income <= $36250 
        tax = (GrossIncome-8925)*0.15 + 892.5;
    }
    else if(GrossIncome > 36250 && GrossIncome< 87850) { // $36250 < income <= $87850
        tax = (GrossIncome - 36250)*0.25 + 4991.25;
    }
    else {
        tax = 17891.25 + (GrossIncome - 87850)* 0.28; // income is over $87850
    }
}
    // computing the tax, if the user is married
    else {
      if(GrossIncome <= 17850) {  // the income less or equal to $17850 for the couples
        tax = GrossIncome * 0.1;
    }
      else if(GrossIncome>17850 && GrossIncome<72500) { // the $17850 < income <= $72500
        tax = (GrossIncome-17850)*0.15 + 1785;
    }
       else {                                             // income is bigger than $72500
            tax = 9982.5 + (GrossIncome - 72500)* 0.28;
    }
   }
//output the information   
cout<<"Your total tax is: $"<<tax<<endl;

// output information of tax is bigger than withheld, user has no refund and owed tax
  if(tax > Withheld) {
      taxOwed = tax - Withheld;
      cout<<"Name: "<<first_name<<" "<<last_name<<endl;
      cout<<"Total Gross adjusted income: $"<<GrossIncome<<endl;
      cout<<"The Total tax owed: $"<<taxOwed<<endl;
      cout<<"Your REFUND Status is empty."<<endl;
}
// output information of tax is less than withheld, user has no tax and has refund 
  else { 
      refund = Withheld - tax;
      cout<<"Name: "<<first_name<<" "<<last_name<<endl;
      cout<<"Total Gross adjusted income: $"<<GrossIncome<<endl;
      cout<<"The total refund: $"<<refund<<endl;
      cout<<"You don't owed tax."<<endl;
   }

  }
  // GrossIncome is less exemption and deduction, no tax to pay
  else {
   tax = 0;
   cout<<"You have no tax to pay.";
  }

    return 0;
}