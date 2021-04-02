#include <iostream>
#include <stdexcept>

using namespace std;

// Prototype
double divide(double num1, double num2);

int main(){
    double n1, n2;

    cin >> n1 >> n2;

    // Code that could throw an exception
    try{
        cout << divide(n1, n2) << endl;

    // Code that executes when an exception is thrown in the try block
    } catch(const char* errorMsg){
        cout << "ERROR!" << endl << errorMsg << endl;
    }

    return 0;
}

// Function
double divide(double num1, double num2){
    if(num2 == 0){
        throw "division by zero!";   // Throw expression
    }
    
    return num1/num2;
}