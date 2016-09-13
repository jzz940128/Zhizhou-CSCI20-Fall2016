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
   cout<<"-------------------------------------------------------------------------"<<endl;
   cout<<"Here is the first monster u build: "<<monster1.Name<<endl;
   cout<<"head: "<<monster1.Head<<", eyes: "<<monster1.Eyes<<", ears: "<<monster1.Ears;
   cout<<"nose: "<<monster1.Nose<<", mouth: "<<monster1.Mouth<<endl;

//buid the second monster
  monster2.Name ="Joe";
  monster2.Head ="Happy";
  monster2.Eyes ="Wackus";
  monster2.Ears ="Spritem";
  monster2.Nose ="Zombus";
  monster2.Mouth ="Spritem";
   cout<<"-------------------------------------------------------------------------"<<endl;
   cout<<"Here is the second monster u build: "<<monster2.Name<<endl;
   cout<<"head: "<<monster2.Head<<", eyes: "<<monster2.Eyes<<", ears: "<<monster2.Ears;
   cout<<"nose: "<<monster2.Nose<<", mouth: "<<monster2.Mouth<<endl;

//buid the third monster
  monster3.Name ="FengShao";
  monster3.Head ="Franken";
  monster3.Eyes ="Vegitas";
  monster3.Ears ="Wackus";
  monster3.Nose ="Spritem";
  monster3.Mouth ="Vegitas";
   cout<<"-------------------------------------------------------------------------"<<endl;
   cout<<"Here is the third monster u build: "<<monster3.Name<<endl;
   cout<<"head: "<<monster3.Head<<", eyes: "<<monster3.Eyes<<", ears: "<<monster3.Ears;
   cout<<"nose: "<<monster3.Nose<<", mouth: "<<monster3.Mouth<<endl;
  
//build the fourth monster
  monster4.Name ="AntiMagic";
  monster4.Head ="long";
  monster4.Eyes ="none";
  monster4.Ears ="elf";
  monster4.Nose ="spritem";
  monster4.Mouth ="Wackus";
  cout<<"-------------------------------------------------------------------------"<<endl;
   cout<<"Here is the fourth monster u build: "<<monster4.Name<<endl;
   cout<<"head: "<<monster4.Head<<", eyes: "<<monster4.Eyes<<", ears: "<<monster4.Ears;
   cout<<"nose: "<<monster4.Nose<<", mouth: "<<monster4.Mouth<<endl;

   return 0;
 }