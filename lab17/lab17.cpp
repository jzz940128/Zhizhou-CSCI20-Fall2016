 /* Lab17 -Cstring
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   11/07/2016
   Description:This program is responsible for creating a username
   for a new website. It should accept fist name up to 10 characters
   and a last name up to 20 characters. It suppose to tell user their
   their input is larger, and first name and last name can't be same.
   keep running the program till the user input valid value.
   *Hint: Only use Cstring to code this program
   */
#include<iostream>
#include<string.h>
using namespace std;

int main() {
 //array to store last name and firstname
 char firstName[10];
 char lastName[20] = "last name";
//Firstname part
//tell user the rules and input firstname
 cout<<"to create a Username, please enter\n" 
 "your first name,and last name.\n"
 "(First name is limited under 11 characters can't equal 11)\n"
 "first name: ";
//input firstname
cin>>firstName;
// display user's input by a loop
int i =0;
cout<<"Your input of first name: ";
for( i=0; firstName[i] != '\0'; ++i) {
cout<<firstName[i];
}
//to check if the input is valid
cout<<endl;
//While loop running by user input firstname bigger than 10 characters
while (i>=10 ) {

//ask user reinput
 cout<<"your input is too large, please reinput:"<<endl;
 cin>>firstName;
// reset the firstname 
for( i=0; firstName[i] != '\0'; ++i) {
}
}
//store the correct first name
// show the correct firstname
cout<<endl<<"You get your correct first name: "<<firstName<<endl;

//--------------------------------------------------------------------
//last name part
// ask user input input last name
cout<<"(Last name limited in 20 characters and can't be same to your first name)!!!"<<endl;
cout<<"please enter last name: ";
cin>>lastName;
int k = 0;
//output the user's input
cout<<"Your input of last name: ";
for(k = 0; lastName[k] != '\0'; ++k){
 cout<<lastName[k];
}

//While loop running by input of last name is over 20 characters or same as firstname
while (k>=20 || strcmp(lastName,  firstName) == 0) {
// ask user reinput
 cout<<endl<<"you input a illegal lastName(larger or same as firstName) please reinput:"<<endl;
 cin>>lastName;
// reset last name
 for( k=0; lastName[k] != '\0'; ++k) {
}
}

// ouput the correct lastname
cout<<endl<<"You get your correct last name: "<<lastName<<endl;


//show the 3 different usernames 
cout<<endl<<"Your name is :"<<firstName<<" "<<lastName<<endl<<"Username creation..."<<endl;
cout<<"Create sucesseful! there are 3 of your username please pick one(enter 1 - 3): "<<endl;
cout<<"1."<<firstName[0]<<firstName[1]<<lastName<<endl;
cout<<"2."<<firstName<<lastName<<endl;
cout<<"3."<<firstName[0]<<lastName<<endl;
//ask user to choose a user name they like
int user = 0;
cout<<"choose your user name:" <<endl;
cin >> user;
// choose username 1
if(user == 1) {
  cout<<"Your user name is :"<<firstName[0]<<firstName[1]<<lastName<<endl;
}
//choose of username 2
else if(user == 2) {
 cout<<"Your user name is :"<<firstName<<lastName<<endl;
}
//choose of username 3
else if(user == 3) {
cout<<"Your user name is :"<<firstName[0]<<lastName<<endl;
}
//choose a none username
else {
 cout<<"you pick none user name."<<endl;
}
return 0;
 
}