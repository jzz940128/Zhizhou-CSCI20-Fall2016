 /* Lab19 -file output and output
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   11/09/2016
   Description:use file input to read in a file with list of numbers.
   Numbers in multiple lines, 4 numbers in each line and speerated by
   space. And then store those numbers in an 2 dimensional array. And
   count the sum of each line and column, and output numbers and sum
   in another file with manipulators.
*/
#include<iostream>
#include<fstream>
#include<iomanip>
#include<ios>
using namespace std;


int main() {
//partI input file------------------------------------
    ifstream inFS; //input file stream
   inFS.open("lab19.txt"); // open the file
  
  // indicates error
   if(!inFS.good()) {
     cout<<"file could not found" <<endl; 
     return 0;
   }
     int array[3][4]; //array for storing value from file(lab19.txt)
     
int i = 0; 
int j = 0;
//store the 1st line of numbers from 19lab.txt file into array;
while(j<4) {
    inFS>>array[i][j];
    j++;
}

//store the 2nd line of numbers from 19lab.txt file into array 
j = 0;
i = 1;
while(j<4) {
    inFS>>array[i][j];
    j++;
}

//store the 3rd line of numbers from 19lab.txt file into array 
j = 0;
i = 2;
while(j<4) {
    inFS>>array[i][j];
    j++;
}

//cout line#1
i = 0;
j = 0;
while(j<4)  {
    cout<<array[i][j]<<"  ";
    j++;
}
cout<<endl;
//cout line#2
i = 1;
j = 0;
while(j<4)  {
    cout<<array[i][j]<<"  ";
    j++;
}
cout<<endl;
//cout line#3
i = 2;
j = 0;
while(j<4)  {
    cout<<array[i][j]<<" ";
    j++;
}
cout<<endl;

// check if the file reach the end   
    if(!inFS.eof()) {
    cout<<"did not reach the end of the file!! "<<endl;

}
       inFS.close();// done and close the input file("lab19.txt")
   
//add up  and cout sum of line#1
   i = 0;
    j = 0;
     int Line1 = 0;
     while(j < 4) {
    Line1 = Line1+array[i][j];
    j++;
     }
     cout<<"line1: "<<Line1<<endl;
     j = 0;
     i = i + 1;
//add up and cout sum of line#2
     int Line2 =0;
     while(j < 4 ) {
         Line2 = Line2 + array[i][j];
         j++;
       }
     cout<<"line2: "<<Line2<<endl;
//add up and cout sum of line#3
j = 0;
i = i + 1;
int Line3 = 0;
while(j < 4 ) {
         Line3 = Line3 + array[i][j];
         j++;
       }
     cout<<"line3: "<<Line3<<endl;


//add up and cout sum of Col#1
i = 0;
j = 0;
int column1 =0;
while(i<3) {
    column1 = column1 + array[i][j];
    i++;
}

cout<<"column1: "<<column1<<endl;

//add up and cout sum of Col#2
j = j + 1;
i = 0;
int column2 = 0; 
while(i<3) {
    column2 = column2 + array[i][j];
    i++;
}
cout<<"clolumn2: "<< column2<<endl;

//add up and cout sum of Col#3
j = j + 1;
i = 0;
int column3 = 0; 
while(i<3) {
    column3 = column3 + array[i][j];
    i++;
}
cout<<"clolumn3: "<< column3<<endl;

//add up and cout sum of Col#4
j = j + 1;
i = 0;
int column4 = 0; 
while(i<3) {
    column4 = column4 + array[i][j];
    i++;
}
cout<<"clolumn4: "<< column4<<endl;

//----------------partII file output----------------------------
        
ofstream outFS; //output file stream
outFS.open("output.txt"); //open a new file

//indicates error
if(!outFS.good()) {
     cout<<"file could not found" <<endl; 
     return 0;
   }
  
//fight out put line#1
i = 0;
j = 0;
while(j<4)  {
    outFS<<array[i][j]<<"  ";
    j++;
}


//file output sum of line1  
outFS<<Line1;
i = 1;
j = 0;

//file output line#2
outFS<<endl;
while(j<4)  {
    outFS<<array[i][j]<<"  ";
    j++;
}
//file output sum of line2
outFS<<Line2;
outFS<<endl;

//file output line#3
i = 2;
j = 0;
while(j<4)  {
    outFS<<array[i][j]<<" ";
    j++;
}
//file output sum of line3 with the manipulators right and set the width to 3
outFS<<setw(3) << right<<Line3<<endl;

// file output sum of each column with the manipulators left
outFS<<left<<column1<<" "<<column2<<" "<<column3<<" "<<column4;

outFS.close(); //done and close file(output.txt)
return 0;
}