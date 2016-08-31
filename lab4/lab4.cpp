#include <iostream>
#include <string>
using namespace std;
/* Lab1.3 - Problem Statement
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   08/31/2016
   Description: Create a program that asks the user to
   input information for mad libs, and ouput the user's input
*/
int main() {
    string Name;
    int age=0;
    float birthday;
    string talks;
    char blood;
    string answer;
cout<<"You met a girl on social App. at couple week ago, right now u r talking to her."<<endl;
cout<<"try to invite her hang out with you and u r a nurd."<<endl;
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