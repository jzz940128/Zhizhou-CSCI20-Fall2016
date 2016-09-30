/* Program#2 - Class
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   09/30/2016
   Description: Create a class that determines a person’s weight
                on various planets. In this program I gonna do 4 
                differents of planets - Earth, Moon, Mars, Jupiter
                This file is to declare class function, and identify,
                user will run it on the program2main.cpp file
 */
#include<iostream>
using namespace std;
// declare the class of Persons weight on various planets
class PlanetsPersonsWeight {
    public:
//Declare the class SetFunctions to set weight to Each palnet
void SetEarthWeight(double E); // mutator function
void SetMoonWeight(double Mo);
void SetMarsWeight(double Ma);
void SetJupiterWeight(double J);

//Delcare the class get function to get the weight value of each planet
double GetEarthWeight() const;// accessor function
double GetMoonWeight() const;
double GetMarsWeight() const;
double GetJupiterWeight() const;

//Decalre the class print function to output information
void printWeight();
//
PlanetsPersonsWeight(); // decalre default constructor
PlanetsPersonsWeight(double W); // declare the overload constructor with a parameter W

private:
double EarthW; //calss varialbe Earth weight
};
/* Weight Formular
Moon: Earth * 0.167
Mars: Earth /2.64
Jupiter: (Earth/ 9.81 )*24.79 = Earth * 2.53
*/

// identify the default constructor, assign 0 to EarthW 
PlanetsPersonsWeight :: PlanetsPersonsWeight() {
    EarthW =0.0;
   

}

// identify the overload constructor, assign the parameter value to EarthW
PlanetsPersonsWeight :: PlanetsPersonsWeight(double W) {
    EarthW = W;

}
// identify the mutator function, set Earth value
void PlanetsPersonsWeight :: SetEarthWeight(double E) {
    EarthW = E;
    return;
}
// identify the Moon function, set moon's weight and convert to EarthW
void PlanetsPersonsWeight :: SetMoonWeight(double Mo) {
    EarthW = Mo / 0.167;
    return;
}
// identfiy the Mars, and convert weight to it on Earth
void PlanetsPersonsWeight :: SetMarsWeight(double Ma) {
    EarthW = Ma * 2.64;
    return;
}
// Identify the Jupiter, convert weight to it on Earth
void PlanetsPersonsWeight :: SetJupiterWeight(double J){
    EarthW = J / 2.53;
    return;
}

// accessor function return the Earth weight value
double PlanetsPersonsWeight :: GetEarthWeight() const {
    return EarthW;
    
}
// get the Moon weight value
double PlanetsPersonsWeight :: GetMoonWeight() const {
    return EarthW * 0.167;
}
// get the Mars weight value
double PlanetsPersonsWeight :: GetMarsWeight() const {

    return EarthW / 2.64;
}
// get the Jupiter weight value
double PlanetsPersonsWeight :: GetJupiterWeight() const {
    
    return EarthW * 2.53;
}

//print functions
void PlanetsPersonsWeight :: printWeight() {
    cout<<"Earth: "<<GetEarthWeight()<<"kg"<<endl;// output the weight on Earth
    cout<<"Moon: "<<GetMoonWeight()<<"kg"<<endl;// output the weight on Moon
    cout<<"Mars: "<<GetMarsWeight()<<"kg"<<endl;// output the weight on Mars
    cout<<"Jupiter: "<<GetJupiterWeight()<<"kg"<<endl;// output the weight on Jupiter
    
    return;
    
}
