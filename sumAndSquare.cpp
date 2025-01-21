// Name: Andrew Paris Boske
//Course: COMPSC.230
//Prof. Name: Dr. Omar X
//Assignment (e.g. Homework # or Exam #): Lab 3
//Program Name: sumAndSquareAPB
//Program brief description: adding two values but if theyre the same they get squared

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double input1, input2, total;
    
    cout << "Please input your first number to 'add': ";
    cin >> input1;
    
    cout << "Please input your second number to 'add': ";
    cin >> input2;
    
    if (input1 == input2){
        total = pow((input1 + input2), 2);
        cout << "Your numbers have been squared!" << endl;
    } else {
        total = input1 + input2;
    }
    
    cout << "Your numbers of " << input1 << " and " << input2 << " came out to " << total << endl;
    
    return 0;
}