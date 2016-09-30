/* Program#2 - Class
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/30/2016
   Description: The main function of the program#2.
   /*Those are the Weight convert Formular I use
      Moon: Earth * 0.167
      Mars: Earth /2.64
      Jupiter: (Earth/ 9.81 )*24.79 = Earth * 2.53
*/
   */
#include<iostream>
#include"program2.cpp"
using namespace std;

int main() {
PlanetsPersonsWeight weight1; // testing default constructor
PlanetsPersonsWeight weight2(10); // testing the overload constructor

weight1.printWeight();
weight2.printWeight();

//The first test number functions- 100 on Earth
cout<<"Test#1 - Set 100 kg on Earth: "<<endl;
weight1.SetEarthWeight(100);// Testing the mutator function
cout<<weight1.GetEarthWeight()<<endl;// Testing the accessor function
weight1.printWeight();
cout<<endl;

//The second test number functions- 100 on Mars
cout<<"Test#2 - Set 100 kg on Mars: "<<endl;
weight1.SetMarsWeight(100);           // Testing Mars functions
cout<<weight1.GetMarsWeight()<<endl;
weight1.printWeight();
cout<<endl;

//The third test number functions- 100 on Jupiter
cout<<"Test#3 - Set 100 kg on Jupiter: "<<endl;
weight1.SetJupiterWeight(100);             // Testing Jupiter functions
cout<<weight1.GetJupiterWeight()<<endl;
weight1.printWeight();
cout<<endl;

//The fourth test number functions - 100 on Moon
cout<<"Test#4 - Set 100 kg on Moon: "<<endl;    // Testing Moon functions
weight1.SetMoonWeight(100);
cout<<weight1.GetMoonWeight()<<endl;
weight1.printWeight();
cout<<endl;

//The fifth test number functions - 28 on Mars
cout<<"Test#5 - Set 28 kg on Mars: "<<endl;   
weight2.SetMarsWeight(28);
cout<<weight2.GetMarsWeight()<<endl;
weight2.printWeight();
cout<<endl;

//The 6th test number functions - 35 on Jupiter
cout<<"Test#6 - Set 35 kg on Jupiter: "<<endl;
weight2.SetJupiterWeight(35);
cout<<weight2.GetJupiterWeight()<<endl;
weight2.printWeight();
cout<<endl;

//The 7th test number functions - 300 on Mars 
cout<<"Test#7 - Set 300 kg on Mars: "<<endl;
weight2.SetMarsWeight(300);
cout<<weight2.GetMarsWeight()<<endl;
weight2.printWeight();
cout<<endl;

//The last test number functions - 156 on Mars
cout<<"Test#8 - Set 156 kg on Moon: "<<endl;
weight2.SetMoonWeight(156);
cout<<weight2.GetMoonWeight()<<endl;
weight2.printWeight();


return 0;
    }