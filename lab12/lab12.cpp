/* Lab12 - Q&A flowchart
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   10/08/2016
   Description:Create a yes or no questions & answers 
              flowchart, to test what type of heroes
              in DOTA2 the player better to play.
   */

#include<iostream>
#include<string>
using namespace std;

int main() {
char user_Answer;// to store user's input
// describe how to answer
cout<<"This is the flowchart test, to test what type of roles of DOTA2\n"
      "you good to start with. And then you will feel more comfortable"<<endl<<endl;
cout<<"*HINT: or the questions you only need to answer with yes or no by \n"
       "inputing y or n, and it doesn't matter capital case or lower case\n"
       "The question start right on the flow, please be SERIOUSLY!!!"<<endl<<endl<<endl;
//The first main question
 cout<<" Have you ever played MOBA game,"<<endl;
 cout<<"such as LOL, DOTA, warcraftIII or DOTA2?"<<endl;
 cin>>user_Answer;
    // the 1st subQuestion if user answer yes on the first question
 if(user_Answer== 'y'|| user_Answer == 'Y') {
     cout<<"1-1. Do you think you have higher ability\n"
           "than most of persons in that game?"<<endl;

     cin>>user_Answer;
     // the next step of user answer yes on the first subquestion.
     if(user_Answer == 'y'|| user_Answer == 'Y') {
      cout<<"1-1-1. Would you like to contribute to your team\n"
            "more than build yourself stronger?"<<endl;

  
      cin>>user_Answer;
        if(user_Answer == 'y'|| user_Answer == 'Y'){
            // the step of user answer yes on all the above questions 
            cout<<"1-1-1-1. Do you like to play solo ranked\n"
            "better than play party ranked?"<<endl;
            
            //the final results of the 1st subquestion
            cin>>user_Answer;
            switch (user_Answer) {

                case 'y' :
                case 'Y':
                cout<<"You are the AGILITY player, good luck"<<endl;
                break;
                
                case 'n' :
                case 'N' :
                cout<<"You are the INTELLIGENCE player, have fun"<<endl;
                break;
            }
        }
        //result if user input n or N in question 1-1-1
        else {
           cout<<"you might to play AGILITY heroes, but you need more practice."<<endl;
        }
      }
     // result if user input n or N in question 1-1
     else {
         cout<<"You better play STRENGTH heroes"<<endl;
    }
 }
 //the second main brach of the question, if user input n or N at first question
 else if(user_Answer == 'n'|| user_Answer == 'N') {
     cout<<"2-1. Do you hope you will have a lot of spells\n"
           "you need to use when you in the team fight?"<<endl;
           
           cin>>user_Answer;
           // the final results of the second subquestion(second brach)
           switch (user_Answer) {
                case 'y' :
                case 'Y':
                cout<<"Congratulation! You should try INTELLIGENCE!"<<endl; // result 2-1
                break;
               
                case 'n' :
                case 'N' :
                cout<<"You better start at STRENGTH heroes, have fun"<<endl;// result 2-2
                break;
           }
 }
 
 // if user input a wrong condition(something except n and N or y and Y)
 else {
     cout<<"Can not read the answer, please answer\n"
            "with y and n or Y and N, and rerun it."<<endl;
 }
  
 return 0;
}