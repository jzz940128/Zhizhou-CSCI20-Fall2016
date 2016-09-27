#include<iostream>
using namespace std;
/* Lab8 - Function
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/25/2016
   Description: create a program to convert Kilogram and Pounds
                use 2 functions and return their converting value.
                In my program I use the equation: kilograms = pounds / 2.2
                and pounds = kilograms * 2.2
 */

// declare the first functions Kilogram to Pounds
float ToPounds(float kg) {
 // the varibale of kilograms taht the user can input a value in below
 cin>>kg;
  
 float pounds = 0.0; // the variable of pounds to store the value of the pounds
 pounds = kg * 2.2; // computing the value of pounds
 return pounds;
 
}
// declare the second function Pounds to Kilogram
float ToKilo(float pounds) {
     // the variable of Pounds that user can input value in below
    float kg =0.0; // the variable of kilogram to store the value of kilogram.
    cin>> pounds;
    kg = pounds/2.2; // computing the value of kilogram
    return kg;
}

// main function
int main() {
cout<<"This is the program to convert Kilograms and pounds"<<endl;
cout<<"The first convert is Kilograms to Pounds, and Pounds to Kilograms after."<<endl;
cout<<"Please enter any number of Kilogram: "<<endl;

// call the function converting kilogram to pounds
 cout<<ToPounds(0.0)<<endl;;
cout<<"Please enter any number of Pounds: "<<endl;
// call the function converting pounds to kilogram
 cout<<ToKilo(0.0)<<endl;
 
 return 0;
}