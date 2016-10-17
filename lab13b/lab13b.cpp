#include<iostream>
#include<string>
using namespace std;
/* Lab13b - for Loop
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   10/17/2016
   Description: use forloop Create a programm that can 
                print every minutes(or requirement minutes )
                between 2 values. (recoding the lab13 by only using for loop)
   */

int main() {
//first part, print every minutes between 1pm to 2:59pm    
   // variables of first parts initialize hours and minutes
  int hours =1; 
  int minutes = 0;

// Loop start
// condition run loop, when the hours is less then 3, and hours plus one each match
  for (hours; hours<3; hours++) {
 // nested loop, run by minutes less than 60 and minutes plus one each match
  for (minutes; minutes<60;minutes++) {
     //output the time in the condition minutes less than 10
     if(minutes < 10) {
     cout<<hours<<":0"<<minutes<<endl;
      
     }
     // output time, if the minutes is not less than 10
     else {
      cout<<hours<<":"<<minutes<<endl;
     }
       }
       //reset the minutes when the minutes is going to equal to 60
       minutes = 0;
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
      // loop, running by start hour less than  ending hour , and StartHours plus one on each match
    for(StartHours; StartHours<EndHours; StartHours++) { 
    // nested loop, running by Count minutes less than 3 and count minutes add 15 on each match
       for(CountMin; CountMin<60; CountMin = CountMin+ 15) {
      //output time when the CountMin less than 10
       if(CountMin < 10) {
     cout<<StartHours<<":0"<<CountMin<<"am"<<endl;
      
     }
     //output time when the CountMin is not less than 10
     else {
      cout<<StartHours<<":"<<CountMin<<"am"<<endl;
     }
 
       }
       //reset Count minutes to 0 when the Count minutes is going to equal 60
       CountMin = 0;
    }
    //out of loop, output the ending time
    cout<<EndHours<<":00am"<<endl;
  }
  //run when time in pm
   else if((AmPmchoice == 'p' || AmPmchoice == 'P' )&& (EndHours <= 12)) {
// loop, running by start hour less than  ending hour , and StartHours plus one on each match
       for(StartHours; StartHours<EndHours; StartHours++) { 
  // nested loop, running by Count minutes less than 3 and count minutes add 15 on each match
              for(CountMin; CountMin<60; CountMin = CountMin+ 15) {
       // output time when CountMin is less than 10
       if(CountMin < 10) {
     cout<<StartHours<<":0"<<CountMin<<"pm"<<endl;
       }
       //output time when CountMin is not less than 10
     else {
      cout<<StartHours<<":"<<CountMin<<"pm"<<endl;
     }
 
       }
       //reset countMin when is going to equal to or bigger than 0
       CountMin = 0;
    }
    //out of loop, output the ending time
    cout<<EndHours<<":00pm"<<endl;
  }
     
     
     // if user enter something not correct(not either 'a' or 'A' or 'p' or 'P')
     else {
         cout<<"please enter correct character, a or A and p OR p anc click Run botton."<<endl;
     }
     
    return 0;
}