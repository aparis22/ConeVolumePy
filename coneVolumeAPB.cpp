// Name: Andrew Paris Boske
//Course: COMPSC.230
//Prof. Name: Dr. Omar X
//Assignment (e.g. Homework # or Exam #): Lab 3
//Program Name: coneVolumeAPB
//Program brief description: calculating the volume of a cone

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Welcome to ConeCalculatorTM. Please input the following: " << endl;
    
    double height, radius, volume;
    double pi = 3.14;
    
    cout << "Input your height: ";
    cin >> height;
    
    cout << "Input your radius: ";
    cin >> radius;
    
    volume = ((1.0/3.0) * pi * pow(radius, 2) * height);
    
    cout << "The volume of your cone with height " << height << " and radius " << radius
            << " is " << volume << endl;
}