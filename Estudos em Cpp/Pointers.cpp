#include <iostream>

using namespace std;

int main(){
    string animal = "Horse";
    string *pointer;

    pointer = &animal;

    cout << "Var 'animal' adress: " << &animal << endl;
    cout << "Address stored in the pointer: " << pointer << endl;
    cout << "Content pointed by pointer: " << *pointer << endl;

    *pointer = "Bird";
    
    cout << "Var 'animal' adress: " << &animal << endl;
    cout << "Address stored in the pointer: " << pointer << endl;
    cout << "Content pointed by pointer: " << *pointer << endl;
}