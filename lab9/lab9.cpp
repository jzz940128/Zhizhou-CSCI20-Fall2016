/* Lab9 - class
   Author: Zhizhou Jiang
   Class:  CSCI20 Browne
   Date:   10/1/2016
   Description: create a classconverts temperatures
   between Kelvin, Fahrenheit and Celsius. It will 
   always internally store the value in kelvin.
   the fomular k = c+ 273.15
               k = (5 * (f -32)/9) + 273.15
               f = ((c*9)/5 + 32)
   */
#include<iostream>
using namespace std;

class TemperatureConverter {
    public :
    void SetTempFromKelvin( double kelvin_value); //mutator- accept kelvin value and stores it
   
    double GetTempFromKelvin() const; // accessor get/ return the kelvin value
    
    void SetTempFromCelsius( double c); //other functions - accept celsius value and convert it to kelvin
    
    void SetTempFromFahrenheit( double f); // accepts a Fahrenheit value and convert it to kelvin
    
    double GetTempAsCelsius(); // get the celsius temperature
    
    double GetTempAsFahrenheit(); // get the Fahrenheit temprature
    
    void PrintTemperatures(); // declare the function that ouput the 3 temperatures functions
    TemperatureConverter(); // declare default constructor  
    TemperatureConverter(double k); // declare overload constructor
     
    private :
    double kelvin_; // variable to store the kelvin value
};

 TemperatureConverter :: TemperatureConverter() { 
 kelvin_ = 0.0; // default constructor by 0


     
 }

 TemperatureConverter :: TemperatureConverter(double k) {
     kelvin_ = k; //overload constructor by value of parameter k
     
 }
// identify the mutator and set the kelvin value
void TemperatureConverter :: SetTempFromKelvin(double kelvin_value) {
    kelvin_ = kelvin_value; 

    return;
}
// identify the celsius convert to kelvin and store value
void TemperatureConverter :: SetTempFromCelsius(double c) {  
   
    kelvin_ = c + 273.15;  
    return;
}
// identify the Fahrenheit convert to kelvin and store value
void TemperatureConverter :: SetTempFromFahrenheit(double f){
    kelvin_ = (5*(f - 32)/9) + 273.15;
    return;
}
// identify g accessor return the kelvin value
double TemperatureConverter :: GetTempFromKelvin() const {
    return kelvin_;
}
// return the celsius value
double TemperatureConverter :: GetTempAsCelsius() {
    return kelvin_ - 273.15;
}

// return the Fahrenheit value
double TemperatureConverter :: GetTempAsFahrenheit() {
    return (((kelvin_ - 273.15) * 9 )/5 +32);
}
// output all of the temperature 
void TemperatureConverter :: PrintTemperatures() {
    cout<<"kelvin: " <<GetTempFromKelvin()<<endl;
    cout<< "Celsius: "<<GetTempAsCelsius()<<endl;
    cout<< "Fahrenheit: " <<GetTempAsFahrenheit()<<endl;
    return;
}
