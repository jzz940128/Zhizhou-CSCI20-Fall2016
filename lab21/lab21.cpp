/*
Lab21 - Seperate file
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   11/22/2016
   Description:Take given code and break it up
   intto appropraite seperate files for compilation

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "myclass.h" //


//int function random a number from 1 to 10;
int randomNumber(){
   srand(time(0));
   return (rand()% 10 + 1);
}

// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;
  // Call the output member function
  object.Output();
  // This ends our program
  cout<<"Rnadom a number: "<<randomNumber()<<endl;
  return 0;
}