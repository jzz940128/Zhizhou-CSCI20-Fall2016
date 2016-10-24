 /* Lab14 - Debugging
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   10/19/2016
   Description: Looking for the error, and explain 
                the technique, and fix it
   Description of the program:
   // Read in a series of grades, terminated by a -1.
 */// Then output the average and minimum of those grades.
#include<iostream>
#include<string>
using namespace std;

 int main() {         
// Declare variables        
int count=0;       
double total=0.0;        
int minimum=0;        
int grade=0; 
cout<<"This program is to computing user's average grades by user's input information."<<endl;
// Read numbers in until we see the -1        
// Sum up grades as we do, and look for minimum 
cout<<"please enter your grade, or enter -1 to quit it."<<endl;
cin >> grade;
minimum = grade;

while (grade != -1) {               
    
    total = total + grade; //sum up the grade                
    count = count + 1;

    if (grade < minimum && minimum >= 0) { // look for minimum                   
        minimum = grade;
    
        
    }
       cout<<"please enter the next grade or enter -1 to count your average"<<endl;
        cin >> grade; // input the next grade

        }         
        // Output results      
        double average = total / count;      
        cout<<"There were "<<count<<" grades has been computing."<<endl;
        cout<<"The total grade is: "<<total<<endl;
        cout << "Average was " << average << endl;
        cout << "Minimum was " << minimum << endl;         
        return 0;
     
 }
/*---------------Debug write up------------------------------
----error:
1.Syntax error - Coding as paragraph, missed a lot of requires newline, so most of code in the same line

2.runtime error - in the loop, the terminated number has been counted.

3.Logic error/runtime - never store the correct minimum number, and minimum is always the terminated number "-1"

4.runtime error - the final value of the variable 'count' is incorrect (does not  match to we expected)
   it always count extra time, because set input grade before computing the count value. 
5.logic error - variable type incorrect, total grade and average grade should not declared by int, should be with double.
   that user can get an correct average number.
5.others problem(kind of syntax) - no comment and output to describe how does the coding run, and how to use it.

----technique
1. Rubber duck - Actually the process was not very seriously, I didn't really force myself to
  explain. However, I read all of the codes, line by line, ward by ward before I ran it. For me, 
  this step is mostly for see what the program trying to do, and check if it missed some little 
  thing, such as '}' , ';' etc.
2. Print debugging - After I read it, I ran the code and test it, see what would happen. For
 this program, most of error I found, and problems I solved was on this step. The coding never failed
 to run, most of error was it didnt print the expectation result. I just run, check, fix, and again.
 In addition, in this process, I also create some print statement. Because some of variable were not
 display on the original code. such as, the' count', and 'total'. It's easier to find error by create
 the output.
3. By the way, I like the technique "wolf fence", even I didn't really use it on this program, because
the program never failure to run. When my code was failure and unable to run, I always set part of it
as comment, and run the other side, to check which side has the error.

----somethihg else
To fix the program, I also add some request output to lead user be more comfortable to use it.
I think miss comment and describe output is kind of error too, because the code is not understandable
and does not make sense
*/
