#include <iostream>
#include <string>
using namespace std;

/* Program#1 - Variables
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/12/2016
   Description: Calculate a person’s weekly wages based on hourly 
   salary and hours. Determine how much they would get paid if they
   paid 17% in taxes.  Create a wage slip with name, hours, rate, gross
   pay, and net pay.
 */ 

// the code start:
int main() {
// initialized the variables that will be used on flow. 
 string FirstNames;
 string LastNames;
 int hours =0; // The users' wooking hours per week
 float grosspay =0.0; // Users' total salary before taxes
 float netpay = 0.0;// currently earns of users
 float hourPay =0.0;
 float taxRate = 0.17;// the percentitial of taxes charging
 float taxes =0.0;// the excatly taxes 

//Ask users enter their information
 cout<<"Please enter your first name: "<<endl;
 cin>>FirstNames;
 cout<<"Please enter your last name: "<<endl;
 cin>>LastNames;
 cout<<"Please enter how many hours you work this week: "<<endl;
 cin>>hours;
 cout<<"Please enter your hourly salary: "<<endl;
 cin>>hourPay;

//according to the information computing users' grosspay, taxes and netpay 
 grosspay = hours * hourPay;
 taxes = grosspay*0.17;
 netpay = grosspay - taxes;

//output the whole Wage Slip
 cout<<"----------------------WageSlip----------------------"<<endl;
 cout<<"----------------------Earnings------------------"<<endl;
 cout<<"Name     | payrate   | hours(perweek) | Amount"<<endl;
 cout<<FirstNames<<" "<<LastNames<<"| $"<<hourPay<<"      | "<<hours<<"          | $"<<grosspay<<endl;
 cout<<endl;
 cout<<"-----------------Taxes & NetPay-----------------------------------"<<endl;
 cout<<"Taxes:  $"<< taxes<<endl;
 cout<<"Netpay: $"<< netpay<<endl;
 
 return 0;

    
}