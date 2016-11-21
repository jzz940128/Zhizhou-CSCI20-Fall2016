#include<iostream>
#include<string.h>
#include<ios>
#include<fstream>
using namespace std;
/* Program#4 - Data Structure
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   11/19/2016
   Description: This program will read in student answers for a test 
   and compare to the answerkey by reading in another file. For each
   correct answer give 1 point, for each omitted answer give 0 point
   and for each incorrect answer minus 1/4 point.out to a file with
   each student's name and overall grade and each omitted and incorrect
   And then, compute the average of the class and list the questions more
   than 50% omitted or incorrect
 */ 
 
//declare the class Average grade
class AvgGrade {
  public:
  double getaverage(double total_point);
};
//declare the class function with a parameter total point 
double AvgGrade :: getaverage(double total_point) {
  return total_point/6;// return the average value total point devide by 6
}


int main() {
//create new stream with variable inFS1
ifstream inFS1;
// assignment the file to answerkey array
inFS1.open("answerkey.txt");
int i = 0;
string answerkey[21];
while (!inFS1.eof()) {
inFS1>>answerkey[i];
cout<<answerkey[i];
i++;
}
cout<<endl;

i = 0;
ifstream inFS2;
inFS2.open("studentanswers.txt");
//Pull in the answers of student from txt file.
// student1
string name1[2];//name of student1 
inFS2>>name1[0];
inFS2>>name1[1];
string student1[21];//answers of student1
for(i=0; i< 21; i++) {
inFS2>>student1[i]; 
}
i = 0;
//student2
string name2[2];
inFS2>>name2[0];
inFS2>>name2[1];
string student2[21];
while(i<21) {
    inFS2>>student2[i];
    i++;
}

//student3
string name3[2];
inFS2>>name3[0];
inFS2>>name3[1];
i = 0;
string student3[21];
while(i<21) {
    inFS2>>student3[i];
    i++;
}

//student4
i = 0;
string name4[2];
inFS2>>name4[0];
inFS2>>name4[1];
string student4[21];
while(i<21) {
    inFS2>>student4[i];
    i++;
}

//student5
i = 0;
string name5[2];
inFS2>>name5[0];
inFS2>>name5[1];
string student5[21];
while(i<21) {
    inFS2>>student5[i];
    i++;
}

//student6
i = 0;
string name6[2];
inFS2>>name6[0];
inFS2>>name6[1];
string student6[21];
while(i<21) {
    inFS2>>student6[i];
    i++;
}
cout<<endl;

//count 
//student1 grade count
int j = 0;

int k = 0;
i = 0;
int correct = 0;// to count how many questions are correct

int omitted = 0; // to count how many questions are omitted
int omitList[21]; // to store the omitted questions

int incorrect = 0; // to count the incorrect question
int incorrectList[21]; // store the incorrect questions
double point1 =0; // count the point
int array1[21];//to distinguish each question is correct, incorrect, or omitted, 9 is correct, 0 is omitted, 1 is correct
//loop running by i < 21(the numbers of questions)
while(i<21) {
   //students answer = answerkey
  if(student1[i] == answerkey[i]) {
      point1 = point1 + 1; //point + 1
      array1[i] = 9;
      correct++;// correct + 1
  }
  //students answer is omitted
  else if(student1[i] == "?" ) {
      point1 = point1 + 0; //point + 0
       omitList[omitted] = i; //store the question number to omitlist
       array1[i] = 0; 
       omitted++;// count omitted
  }
  else { //incorrect answer
      point1 = point1 - 0.25; // point - 1/4
      incorrectList[incorrect] = i; // store the question number to incorrect list
      array1[i] = 1;
      incorrect++;//count incorrect

      
  }
    i++;
}

//output the student1's data
cout<<endl<<"student1 "<<endl;
cout<<"Name: "<<name1[0]<<" "<<name1[1]<<endl;
j = 0;
cout<<"ommited Questions:";
for(j == 0; j< omitted; j++ ) {
    cout<<"#"<<omitList[j]<<" ";
}
j = 0;
cout<<endl<<"incorrect Questions:";
for(j == 0; j<incorrect; j++ ) {
    cout<<"#"<<incorrectList[j]<<" ";
}
cout<<endl<<"correct: "<<correct<<" toatal point: "<<point1<<endl;
cout<<"omitted: "<<omitted<<endl;
cout<<"incorrect: "<<incorrect<<endl;

//To count each student by the same way to student1
//student2 grade count
i = 0;
int correct2 = 0;
int omitted2 = 0;
int omitList2[21];
int incorrect2 = 0;
int incorrectList2[21];
double point2 =0;
int array2[21];
while(i<21) {
    
  if(student2[i] == answerkey[i]) {
      point2 = point2 + 1;
      array2[i] = 9;
      correct2++;
  }
  else if(student2[i] == "?" ) {
      point2 = point2 + 0;
      omitList2[omitted2] = i;
      array2[i] = 0;
      omitted2++;
  }
  else {
      point2 = point2 - 0.25;
      incorrectList2[incorrect2] = i;
      array2[i] = 1;
      incorrect2++;
  }
    i++;
}
//output student2's data
cout<<endl<<"student2 "<<endl;
cout<<"Name: "<<name2[0]<<" "<<name2[1]<<endl;
j = 0;
cout<<"ommited Questions:";
for(j == 0; j< omitted2; j++ ) {
    cout<<"#"<<omitList2[j]<<" ";
}
j = 0;
cout<<endl<<"incorrect Questions:";
for(j == 0; j<incorrect2; j++ ) {
    cout<<"#"<<incorrectList2[j]<<" ";
}
cout<<endl<<"correct: "<<correct2<<" toatal point: "<<point2<<endl;
cout<<"omitted: "<<omitted2<<endl;
cout<<"incorrect: "<<incorrect2<<endl;
//student3 grade count
i = 0;
int correct3 = 0;
int omitted3 = 0;
int omitList3[21];
int incorrect3 = 0;
int incorrectList3[21];
double point3 =0;
int array3[21];
while(i<21) {
    
  if(student3[i] == answerkey[i]) {
      point3 = point3 + 1;
      array3[i] = 9;
      correct3++;
  }
  else if(student3[i] == "?" ) {
      point3 = point3 + 0;
       omitList3[omitted3] = i;
       array3[i] = 0;
      omitted3++;
  }
  else {
      point3 = point3 - 0.25;
      incorrectList3[incorrect3] = i;
      array3[i] = 1;
      incorrect3++;
  }
    i++;
}
//output student3's data
cout<<endl<<"student3 "<<endl;
cout<<"Name: "<<name3[0]<<" "<<name3[1]<<endl;
j = 0;
cout<<"ommited Questions:";
for(j == 0; j< omitted3; j++ ) {
    cout<<"#"<<omitList3[j]<<" ";
}
j = 0;
cout<<endl<<"incorrect Questions:";
for(j == 0; j<incorrect3; j++ ) {
    cout<<"#"<<incorrectList3[j]<<" ";
}
cout<<endl<<"correct: "<<correct3<<" toatal point: "<<point3<<endl;
cout<<"omitted: "<<omitted3<<endl;
cout<<"incorrect: "<<incorrect3<<endl;
//student4 grade count
i = 0;
int correct4 = 0;
int omitted4 = 0;
int omitList4[21];
int incorrect4 = 0;
int incorrectList4[21];
double point4 =0;
int array4[21];
while(i<21) {
   
  if(student4[i] == answerkey[i]) {
      point4 = point4 + 1;
      array4[i] = 9;
      correct4++;
  }
  else if(student4[i] == "?" ) {
      point4 = point4 + 0;
      omitList4[omitted4] = i;
      array4[i] = 0;
      omitted4++;
  }
  else {
      point4 = point4 - 0.25;
      incorrectList4[incorrect4] = i;
      array4[i] = 1;
      incorrect4++;
  }
    i++;
}
//output student4's data
cout<<endl<<"student4 "<<endl;
cout<<"Name: "<<name4[0]<<" "<<name4[1]<<endl;
j = 0;
cout<<"ommited Questions:";
for(j == 0; j< omitted4; j++ ) {
    cout<<"#"<<omitList4[j]<<" ";
}
j = 0;
cout<<endl<<"incorrect Questions:";
for(j == 0; j<incorrect4; j++ ) {
    cout<<"#"<<incorrectList4[j]<<" ";
}
cout<<endl<<"correct: "<<correct4<<" toatal point: "<<point4<<endl;
cout<<"omitted: "<<omitted4<<endl;
cout<<"incorrect: "<<incorrect4<<endl;
//student5 grade count
i = 0;
int correct5 = 0;
int omitted5 = 0;
int omitList5[21];
int incorrect5 = 0;
int incorrectList5[21];
double point5 =0;
int array5[21];
while(i<21) {
    
  if(student5[i] == answerkey[i]) {
      point5 = point5 + 1;
      array5[i] = 9;
      correct5++;
  }
  else if(student5[i] == "?" ) {
      point5 = point5 + 0;
       omitList5[omitted5] = i;
       array5[i] = 0;
      omitted5++;
  }
  else {
      point5 = point5 - 0.25;
      incorrectList5[incorrect5] = i;
      array5[i] = 1;
      incorrect5++;
  }
    i++;
}
//output student5's data
cout<<endl<<"student5 "<<endl;
cout<<"Name: "<<name5[0]<<" "<<name5[1]<<endl;
j = 0;
cout<<"ommited Questions:";
for(j == 0; j< omitted5; j++ ) {
    cout<<"#"<<omitList5[j]<<" ";
}
j = 0;
cout<<endl<<"incorrect Questions:";
for(j == 0; j<incorrect5; j++ ) {
    cout<<"#"<<incorrectList5[j]<<" ";
}
cout<<endl<<"correct: "<<correct5<<" toatal point: "<<point5<<endl;
cout<<"omitted: "<<omitted5<<endl;
cout<<"incorrect: "<<incorrect5<<endl;
//student6 grade count
i = 0;
int correct6 = 0;
int omitted6 = 0;
int omitList6[21];
int array[21];
int incorrect6 = 0;
int incorrectList6[21];
double point6 =0;
int array6[21];
while(i<21) {
   
  if(student6[i] == answerkey[i]) {
      point6 = point6 + 1;
      array6[i] = 9;
      correct6++;
  }
  else if(student6[i] == "?" ) {
      point6 = point6 + 0;
      omitList6[omitted6] = i;
      array6[i] = 0;
      omitted6++;
  }
  else {
      point6 = point6 - 0.25;
      incorrectList6[incorrect6] = i;
      array6[i] = 1;
      incorrect6++;
  }
    i++;
}
//output student6's data
cout<<endl<<"student6 "<<endl;
cout<<"Name: "<<name6[0]<<" "<<name6[1]<<endl;
j = 0;
cout<<"ommited Questions:";
for(j == 0; j< omitted6; j++ ) {
    cout<<"#"<<omitList6[j]<<" ";
}
j = 0;
cout<<endl<<"incorrect Questions:";
for(j == 0; j<incorrect6; j++ ) {
    cout<<"#"<<incorrectList6[j]<<" ";
}
cout<<endl<<"correct: "<<correct6<<" toatal point: "<<point6<<endl;
cout<<"omitted: "<<omitted6<<endl;
cout<<"incorrect: "<<incorrect6<<endl;
// done and close file
inFS1.close(); 
inFS2.close();

//output each student answer's status 0 is omitted, 1 is incorrect, 9 is correct
//student1

cout<<endl<<"Answer Check: 0 means omitted, 1 means incorrect, 9 means correct."<<endl;
for(int q = 0; q< 21; q++) {
  cout<<array1[q];
}
cout<<endl;
//student2
i = 0;
for(int i = 0; i< 21; i++) {
  cout<<array2[i];
}
cout<<endl;
//student3
i = 0;
for(int i = 0; i< 21; i++) {
  cout<<array3[i];
}
//student4
cout<<endl;
i = 0;
for(int i = 0; i< 21; i++) {
  cout<<array4[i];
}
//student5
cout<<endl;
i = 0;
for(int i = 0; i< 21; i++) {
  cout<<array5[i];
}
//student6
cout<<endl;
i = 0;
for(i = 0; i< 21; i++) {
  cout<<array6[i];
}

int num_omit[10];// array to store the number of questions that more than 50% students omitted
i = 0; 
int y = 0;
int counter = 0; // count how many times each question was omitted
//count and sotre which question is omitted by at least 50% students
cout<<endl<<"omitted questions: ";
while(i < 21) { 
  counter = 0;
if(array1[i] == 0) {
  counter++;
}
if(array2[i] == 0) {
  counter++;
}
if(array3[i]== 0) {
  counter++;
}
if(array4[i] == 0) {
  counter++;
}
if(array5[i]== 0) {
  counter++;
}

if(array6[i] == 0) {
  counter++;
}
if(counter>= 3) {
   num_omit[y] = i;
   cout<<"#"<<num_omit[y]<<" ";
   y++;
}
 i++;
}
//count and store the questions were incorrect by at least 50% of students
i = 0;
int x = 0;
int num_incorrect[11];
int counter_i = 0;
cout<<endl<<"incorrect questions: ";
while(i < 21) {
  counter_i = 0;
if(array1[i] == 1) {
  counter_i++;
}
if(array2[i] == 1) {
  counter++;
}
if(array3[i]== 1) {
  counter_i++;
}
if(array4[i] == 1) {
  counter_i++;
}
if(array5[i]== 1) {
  counter_i++;
}

if(array6[i] == 1) {
  counter_i++;
}
if(counter_i>= 3) {
   num_incorrect[x] = i;
   cout<<"#"<<num_incorrect[x]<<" ";
   x++;
}
 i++;
}

AvgGrade average;
double total = 0.0;
total = point1 + point2 + point3 + point4 + point5 + point6;
cout<<endl<<"Class Average Grade: "<<average.getaverage(total);

i = 0;
x = 0;
y = 0;
j = 0;
ofstream outfs;
outfs.open("StudentData.txt");
//output student data to file
//student1
outfs<<"-------------------------Students Data-------------------------"<<endl;
outfs<<"student1: "<<name1[0]<<name1[1]<<endl;
outfs<<"omitted: "<<omitted<<" questions: ";
for(i = 0; i< omitted; i++ ){
  outfs<<"#"<<omitList[i]<<" ";
}
outfs<<endl<<"incorrect: "<<incorrect<<" questions: ";
for(x = 0; x < incorrect; x++) {
  outfs<<"#"<<incorrectList[x]<<" ";
}
outfs<<endl<<"correct: "<<correct<<" Grade: "<<point1<<endl;
//student2

outfs<<"student2: "<<name2[0]<<name2[1]<<endl;
outfs<<"omitted: "<<omitted2<<" questions: ";
for(i = 0; i< omitted2; i++ ){
  outfs<<"#"<<omitList2[i]<<" ";
}
outfs<<endl<<"incorrect: "<<incorrect2<<" questions: ";
for(x = 0; x < incorrect2; x++) {
  outfs<<"#"<<incorrectList2[x]<<" ";
}
outfs<<endl<<"correct: "<<correct2<<" Grade: "<<point2<<endl;
//student3
outfs<<"student3: "<<name3[0]<<name3[1]<<endl;
outfs<<"omitted: "<<omitted3<<" questions: ";
for(i = 0; i< omitted3; i++ ){
  outfs<<"#"<<omitList3[i]<<" ";
}
outfs<<endl<<"incorrect: "<<incorrect3<<" questions: ";
for(x = 0; x < incorrect3; x++) {
  outfs<<"#"<<incorrectList3[x]<<" ";
}
outfs<<endl<<"correct: "<<correct3<<" Grade: "<<point3<<endl;
//student4
outfs<<"student4: "<<name4[0]<<name4[1]<<endl;
outfs<<"omitted: "<<omitted4<<" questions: ";
for(i = 0; i< omitted4; i++ ){
  outfs<<"#"<<omitList4[i]<<" ";
}
outfs<<endl<<"incorrect: "<<incorrect4<<" questions: ";
for(x = 0; x < incorrect4; x++) {
  outfs<<"#"<<incorrectList4[x]<<" ";
}
outfs<<endl<<"correct: "<<correct4<<" Grade: "<<point4<<endl;
//student5
outfs<<"student5: "<<name5[0]<<name5[1]<<endl;
outfs<<"omitted: "<<omitted5<<" questions: ";
for(i = 0; i< omitted5; i++ ){
  outfs<<"#"<<omitList5[i]<<" ";
}
outfs<<endl<<"incorrect: "<<incorrect5<<" questions: ";
for(x = 0; x < incorrect5; x++) {
  outfs<<"#"<<incorrectList5[x]<<" ";
}
outfs<<endl<<"correct: "<<correct5<<" Grade: "<<point5<<endl;
//student6
outfs<<"student6: "<<name6[0]<<name6[1]<<endl;
outfs<<"omitted: "<<omitted6<<" questions: ";
for(i = 0; i< omitted6; i++ ){
  outfs<<"#"<<omitList6[i]<<" ";
}
outfs<<endl<<"incorrect: "<<incorrect6<<" questions: ";
for(x = 0; x < incorrect6; x++) {
  outfs<<"#"<<incorrectList6[x]<<" ";
}
outfs<<endl<<"correct: "<<correct6<<" Grade: "<<point6<<endl;
outfs<<"-----------------------The Class Data-----------------------------"<<endl;

outfs<<"Average Grade: "<<average.getaverage(total)<<endl;
outfs<<"Most omitted Questions: ";
for(y = 0; num_omit[y] != '\0'; y++) {
  outfs<<"#"<<num_omit[y]<<" "; 
}

outfs<<endl<<"Most incorrect Questions: ";
for(j = 0; j<10; j++) {

  outfs<<"#"<<num_incorrect[j]<<" ";
}
if(!outfs.good()){
  cout<<"Your file has problem!"<<endl;
}
outfs.close(); // close file

return 0;
}
