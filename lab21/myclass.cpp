/*other source file:
- contains definition of the functions
 from the class that declared in header file

*/
#include <iostream>
using namespace std;
#include "myclass.h"
/*
 *  This class is a dummy class to help show how to
 *  break our class into an interface and implementation
 *  file. It will set a member variable to 1 on initialization
 *  and output it using the Output() function.
 */


MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}
