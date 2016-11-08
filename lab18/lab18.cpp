 /* Lab18 -Cstring
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   11/07/2016
   Description:This program is responsible for creating a username
   for a new website. It should accept fist name up to 10 characters
   and a last name up to 20 characters. It suppose to tell user their
   their input is larger, and first name and last name can't be same.
   keep running the program till the user input valid value.
   *Hint: Only use string to code this program
   */
#include<iostream>
#include<string>
using namespace std;

int main() {
int i =0;
string first_name;//to store the value of the first name
string last_name;//to store the value of the last name
//description of this program
cout<<"To sign up an account on our website, we will create your username\n"
"by your first name and last name. first name is up to 10 characters, and\n"
"last name is up to 20 characters and cant be same as first name."<<endl;
//ask user input first name
cout<<"please enter your first_name: ";
cin>>first_name;
cout<<"Size: "<< first_name.length()<<endl;// size of user input firstname
//loop running by user enter first name over 10 characters
while(first_name.length() > 10) {
    cout<<"your input of first_name is illegal(bigger than 10): \n"
    "please reinput your first_name: ";
    cin>>first_name;
}
cout<<"You get your correct first_name: "<<first_name<<endl;

//lastname part----------------------------------------------
//ask user input lastname
cout<<"please enter your last_name: ";
cin>>last_name;
cout<<"Size: "<< last_name.length()<<endl;// size of user input
//while loop running by user enter last name over 20 characters or same as  firstname
while(last_name.length()> 20 || last_name == first_name) {
 cout<<"your input of last_name is illegal(bigger than 20 or same to your first name): \n"
    "please reinput your last_name: ";
    cin>>last_name;
}
cout<<"You get your correct last_name: "<<last_name<<endl;
//create and display the username
cout<<"Your name is: "<<first_name<<" "<<last_name;
cout<<"Username creation, loading..."<<endl;
cout<<"username1. "<<first_name.at(0)<<last_name<<endl;
cout<<"username2. "<<first_name<<last_name<<endl;
cout<<"username3. "<<first_name.at(0)<<first_name.at(1)<<last_name<<endl;

// ask user to choose username
int user;
cout<<"please enter 1 - 3 choose one of the usernames you like: "<<endl;
cin>>user;

if(user == 1) {//choose username1
cout<<"your username is:"<<first_name.at(0)<<last_name<<endl;
}
else if(user == 2) {//choose username2
cout<<"your username is:"<<first_name<<last_name<<endl;
}
else if(user == 3) {//choose username3
cout<<"your username is:"<<first_name.at(0)<<first_name.at(1)<<last_name<<endl;
}
else {// none username
 cout<<"None username"<<endl;
}
return 0;
}