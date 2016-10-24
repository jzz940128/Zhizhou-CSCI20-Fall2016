#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
/* Program#3 - Program Flow
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   10/22/2016
   Description: Number Guessing Game – The computer will choose a random
   number between two numbers chosen by the user. The user enters a number
   and is told “higher”, “lower”, or “winner” based on their guess and the 
   computer’s number.  The game should continue until the user guesses the 
   correct number.  The program should score the game based on how many 
   guesses it takes to get the number.
 */ 
 int level; // global variable to store the level of the game.
 
 //Declare of the class guessing game
 class GuessingGame {
    public :
    //declare the class function
    void chooselevel(int level); //set the level value
    int Getrandom_num(); //get the random number
    int Getlevel();// get the level
    
    //class variable store the random number
    private :
    int rand_num;
};

//identify the function to set the level value
void GuessingGame :: chooselevel(int level) {
    level = level;
}

//identify the function to get the level value
int GuessingGame :: Getlevel() {
    return level;
}



//identify the function to get the random number
// random number is a random number between the level user choose
int GuessingGame :: Getrandom_num () {
 srand(time(0));

  return rand_num = rand()% level;
  }

// main function
 int main() {
//create a class type guess
  GuessingGame guess;
 
 int score = 0;// store the score of the user
 int user = 0; //store user's guessing
 int count = 1;// count how many times that user used to win

//rules of the game
cout<<"Rules about the level: "<<endl;
cout<<"There are only 3 levels you can choose:"<<endl;
cout<<"enter 10 to guess the number from 0 - 10"<<endl;            //I don't let user choose 2 numbers of the level
cout<<"enter 100 to guess the number from 0 - 100"<<endl;          // because if they enter 2 close number, they can always win
cout<<"enter 1000 to guess the number from 0 - 1000"<<endl;        // if they enter 1 and 3, they can easy to win.
cout<<"Hint: You only have 10 chances to guess"<<endl;
cout<<"----------------------------------------------------"<<endl;

//Game start 
cout<<"please choose the level of this game"<<endl;
cin>>level;
if(level == 10 || level == 100 || level == 1000) {
guess.chooselevel(level);
cout<<"the level you choose is 0 -"<<guess.Getlevel()<<endl;

// 1. pc start to product the random number
guess. Getrandom_num();
 int number; // to store the value of random number, I was lazy to type Getrandom_num all the time:D
number = guess. Getrandom_num();// assign the random number to number.
 
 
// user start guessing
 cout<<"please enter your guessing number: ";
 cin>>user;
 // user only can't guess more than 10 times

 //user keep guessing till they win.
 
 while(user != number && count <= 10) {

 if(user <number) {
    
    cout<<"lower!"<<endl;
 }
 else {                        // tell user, his/her number is lower or higher
   cout<<"higher"<<endl;
 }
 cout<<"please enter your guessing number: ";
 cin>>user;

    count++;// count + 1 on each match
 }
 
 score = 11 -count; // count the score

 //output the result when the user get points
 if(count<=10) {
 cout<<"Congratulations! You are the winner"<<endl;
 cout<<"You used "<<count<<" times to get the correct number."<<endl;
 cout<<"Your score is: "<<score<<endl;
 cout<<"The maximum score is 10"<<endl;
}
// result of the user used more than 10 times
 else { 
 cout<<"Bad luck X_X You are Loser! T_T"<<endl;
 }
 }
//if the unser enter an uncorrect level
else {
 cout<<"Sorry, You need to read the rule again!"<<endl;
}
 return 0; 
 }