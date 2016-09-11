#include <iostream>
#include <string>
using namespace std;
/* Lab5 - Struct and object
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/11/2016
   Description: MonsterStruct struct and 4 monster objects
 */ 
 
 // struct group of variables that defined part of  the monsters
 struct MonsterStruct {
     string Name;
     string Head;
     string Eyes;
     string Ears;
     string Nose;
     string Mouth;
 };
 
 // main code
 int main() {

// declare four objects of the monsters each allocated 5 variables of the parts of monsters.    
   MonsterStruct monster1;
   MonsterStruct monster2;
   MonsterStruct monster3;
   MonsterStruct monster4;

// ouput what you can build to the monster
 cout<<"Start here to build your first monster, you have 4 choices for each part: "<<endl;
  cout<<"Zombus, Spritem, Vegitas, Wackus. You can give nothing for that part as well with input None."<<endl; 

// user start to build the monster, step by step
  cout<<"please create the name for ur monster: ";
   cin>>monster1.Name;
  cout<<"please build head for ur monster: ";
   cin>>monster1.Head;
  cout<<"please build eyes for ur monster: ";
   cin>>monster1.Eyes;
  cout<<"please build ears for ur monster: ";
   cin>>monster1.Ears;
  cout<<"please build nose for ur monster: ";   
   cin>>monster1.Nose;
  cout<<"please build mouth for ur monster: ";
   cin>>monster1.Mouth;

// output the whole monsters
   cout<<"the name of Your monster is: "<<monster1.Name<<endl;
   cout<<"the head of Your monster is: "<<monster1.Head<<endl;
   cout<<"the eyes of Your monster is: "<<monster1.Eyes<<endl;
   cout<<"the ears of Your monster is: "<<monster1.Ears<<endl;
   cout<<"the nose of your monster is: "<<monster1.Nose<<endl;
   cout<<"the mouth of Your monster is: "<<monster1.Mouth<<endl;
 
   
   return 0;
 }