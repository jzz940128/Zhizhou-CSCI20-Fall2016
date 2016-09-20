
#include <iostream>
#include <string>
using namespace std;
/* Lab6 - Function
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/19/2016
   Description: create a function that ouput ASCII and call it on an previous code
 */

// declare the confuse man head function
  void HeadofConfuseMan( ) {
string Author = "Zhizhou Jiang";
string Copyright = "Copyright";
int year = 2016;

// function body      
  cout<<" ???????????"<<endl;
  cout<<" ???????????"<<endl;
  cout<<"  | ___    |"<<endl;
  cout<<"  |  @     |"<<endl; 
  cout<<"  |         )   *"<<Copyright<<" "<<Author<<" "<<year<<endl;
  cout<<"  |        | "<<endl;
  cout<<"  |_       |"<<endl;
  cout<<"   (______/| "<<endl;
  cout<<"      |    |  "<<endl;
  
    }
 
 
 int main() {
    //call function
     HeadofConfuseMan();
    
   // previous lab-----------------------
    // initialize the variables I will to use
    string Name;
    int age=0;
    float birthday;
    string talks;
    char blood;
    string answer;
    //declare what u r going to do
cout<<"You met a girl on social App. at couple week ago, right now u r talking to her."<<endl;
cout<<"try to invite her hang out with you and u r a nurd."<<endl;
   
   
   //Start talking right now
cout<<"Hey, what's up. I am_____.How can I call u ?"<<endl;
cin>>Name;
cout<<"Hey "<<Name<<", I am hot girl, how old are you?(enter an age)"<<endl;
cin>>age;
cout<<"I am "<<age<<" When is ur birthday?"<<endl;
cout<<"enter a birthday for hot girl: ";
cin>>birthday;
cout<<"My birthday is "<<birthday<<endl;
cout<<"eh... would u like to tell me what type of blood u r?(enter an blood type for hot girl)"<<endl;
cin>>blood;
cout<<"I am "<<blood<<endl;
cout<<"..... it's kind of quiet right now, say something ask her if she wanna hang out(no space):"<<endl;
cin>>talks;
cout<<"You said: "<<talks<<endl;
cout<<"Answer for the hot girl what do you think(Girls must think this guy is so boring)."<<endl;
cin>>answer;
cout<<answer<<endl;

     
     return 0;
 }