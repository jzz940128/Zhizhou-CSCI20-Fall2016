#include<iostream>
#include<string>
using namespace std;
/* Lab13 -  Loop
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   10/12/2016
   Description:Create a programm that can print every 
               minutes(or requirement minutes ) between
               2 values. 
   */

int main() {
//first part, print every minutes between 1pm to 2:59pm    
   // variables of first parts initialize hours and minutes
  int hours =1; 
  int minutes = 0;

// Loop start
  while(hours<3) {  // condition run loop, when the hours is less then 3
        
      while (hours<3 && minutes <= 60) { // nested loop
          
            if(minutes >= 60) {   //once the value of minutes is going to equal to 60 or bigger than 60, set it to 0
              minutes = 0;
              hours = hours + 1; //once the minutes equal to 60 or bigger than 60, hours + 1;
          }
          if(hours != 3) {
              
              //the output when minutes are less than 10
              if(minutes < 10){
            cout<<hours<<": 0"<<minutes<<"pm"<<endl;
           minutes++;
              }
              // regular output the time
              else {
           cout<<hours<<": "<<minutes<<"pm"<<endl;
           minutes++;
              }
      }
     }
   }
   
 //part2 
 cout<<"now you can enter any 2 hours, it will display the time every 15 minutes between those 2 hours."<<endl;
 //variable of part 2
 int CountMin = 0; // minutes
 int StartHours = 0;// the Start hour that user will input
 int EndHours = 0;// the ending hour that user will input
 char AmPmchoice;// store value a or p that describe AM an PM
 cout<<"*Hint: if start and ending hours are in the morning, please enter a or A"<<endl;
 cout<<"      if they are in the afternoon, please enter p or P"<<endl;
  //ask user for inputing 
  cout<<"please enter an hour you want to start at: "<<endl;
  cin>>StartHours;
  cout<<"please enter an hour you want to end at: "<<endl;
  cin>>EndHours;
  cout<<"please make your choices for am or pm (enter a or A to choose am, p or P to choose pm): "<<endl;
  cin>>AmPmchoice;
  
  //run when time in am
  if((AmPmchoice == 'a' || AmPmchoice == 'A' )&& (EndHours <= 12)) {
      // loop, running the start hour equals to ending hour
    while(StartHours<EndHours) { 
       
        //nested loop running when the start hour less than ending hour and Count minutes is not bigger than 60
       while(StartHours<EndHours && CountMin<=60) {
           // reset the count minutes to 0 and start hour + 1 when count minutes equal or bigger than 60
           if(CountMin >=60) {
               CountMin = 0;
               StartHours = StartHours + 1;
           }
           //output when the count minutes less than 10
        if(CountMin < 10) {
        cout<<StartHours<<": 0"<<CountMin<<"PM"<<endl;
                  CountMin = CountMin + 15;
       }
       //output when the count minutes equal or bigger than 10
       else {
        cout<<StartHours<<":"<<CountMin<<"AM"<<endl;
                  CountMin = CountMin + 15;
        }
       }
       
    }
      
  }
  //run when time in pm
   else if((AmPmchoice == 'p' || AmPmchoice == 'P' )&& (EndHours <= 12)) {
       // loop, running the start hour equals to ending hour
        while(StartHours<EndHours) {
       
       //nested loop running when the start hour less than ending hour and Count minutes is not bigger than 60
       while(StartHours<EndHours && CountMin<=60) {
           // reset the count minutes to 0 and start hour + 1 when count minutes equal or bigger than 60
           if(CountMin >=60) {
               CountMin = 0;
               StartHours = StartHours + 1;
           }
       //output when the count minutes less than 10
       if(CountMin < 10) {
        cout<<StartHours<<": 0"<<CountMin<<"PM"<<endl;
                  CountMin = CountMin + 15;
       }
       //output when the count minutes lbigger than 10
       else {
        cout<<StartHours<<": "<<CountMin<<"PM"<<endl;
                  CountMin = CountMin + 15;
        }
       }
      }
     }
     // if user enter something not correct(not either 'a' or 'A' or 'p' or 'P')
     else {
         cout<<"please enter correct character, a or A and p OR p anc click Run botton."<<endl;
     }
    return 0;
}