/* Lab10 - Relation and Condition Operators
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/25/2016
   Description:Run equations from the equations from a 
               worksheet and determine the result
   */
#include<iostream>
using namespace std;

int main() {
    // description what is it
    cout<<"*Hint: Given the data and run equations, output the result"<<endl;
    cout<<"      If it's not true, it will output 0; else, ouput anything except 0 , mostly 1."<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    // The 1st equation
    int suzyAge = 25;
    int johnAge = 21;
    cout<<"Suzy's age is less than John's:   "<<(suzyAge < johnAge)<<endl;
    
    // The 2nd equation
    int x = 7;
    int y = 7;
    cout<<"By given value, judge the statement: x is bigger or equal to y:   " <<(x >= y)<<endl;

    // The 3rd equation
    int a = 1;
    int b = 9;
    cout<<"By given value,judge the statement:  a is euqal to b:   " <<(a == b)<<endl;
    
    // The 4th equation 
    int limit = 20;
    int count = 10;
    cout<<"The result of limit times count then devide by 2 is bigger than 0:   "<<((limit *count) / 2 > 0)<<endl;
    
    // The 5th equation
    int t = -4;
    int z = 0;
    cout<<"By given values, judge the statement:  t is bigger than 5 or z is less than 2:   "<<(t>5 || z <2)<<endl;
    
    // The 6th equation
    int variable = -5;
    cout<<"By the variable,judge the statement:  it is bigger than 0:   "<<(!(variable > 0))<<endl;
    
    // The 7th equation, reassign the a value to 16
     a = 16;
    cout<<"By given value of a,judge the statement:  a devide 4 less than 8 and a is bigger or equal to 4:   "<<(a/4 < 8 && a>=4)<<endl;
    
    // The 8th equation, re- assign the x, y
     x = -2;
     y =5;
    cout<<"By given value of x, y and z, judge the statement:  x times y is less than 10 or y times z is less than 10:   "<<(x*y <10 || y *z <10)<<endl;
    
    // The 9th equation, the z and y is from the above equation
    int j = -2;
    int k = 5;
    int l = 4;
    cout<<"By given value, judge the statement:  j times l is not less than 10 , or y devide by x then times 4 less than y times 2:    "<<(!(j*l < 10) || y/x * 4 < y * 2)<<endl;
    
    return 0;
    
}