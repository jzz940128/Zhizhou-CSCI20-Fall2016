#include<iostream>
using namespace std;
/* Lab8 - Function
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/25/2016
   Description: create a program to convert Kilogram and Pounds
                use 2 functions and return their converting value.
                In my program I use the equation: kilograms = pounds / 2.
                and pounds = kilograms * 2.
 */

// declare the first functions Kilogram to Pounds
float ToPounds() {
 float kg =0.0;// the varibale of kilograms taht the user can input a value in below
 cin>>kg;
 cout<<"You input: "<<kg<<" kg."<<endl;
 cout<<"translating to pounds..."<<endl;
 float pounds = 0.0; // the variable of pounds 
 pounds = kg * 2.2; // computing the value of pounds
 cout<<"The equality value in pounds is : "<<pounds<<" lbs"<<endl;
 return pounds;
 
}
// declare the second function Pounds to Kilogram
float ToKilo() {
    float pounds =0.0; // the variable of Pounds that user can input value in below
    float kg =0.0; // the variable of kilogram
    cin>> pounds;
    cout<<"You input: "<<pounds<<" lbs."<<endl;
    cout<<"translating to kilograms..."<<endl;
    kg = pounds/2.2; // computing the value of kilogram
    cout<<"The equality value in kilograms is : "<<kg<<" kg"<<endl;
    return kg;
}

// main function
int main() {
cout<<"This is the program to convert Kilograms and pounds"<<endl;
cout<<"The first convert is Kilograms to Pounds, and Pounds to Kilograms after."<<endl;
cout<<"Kilograms to pounds start: "<<endl;

// call the function converting kilogram to pounds
 ToPounds();
cout<<"Pounds to kilograms start: "<<endl;
// call the function converting pounds to kilogram
 ToKilo();
 
 return 0;
}