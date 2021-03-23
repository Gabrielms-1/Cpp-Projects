#include <iostream>
#include <string>
#include "Airplane.hpp"

using namespace std;


int main(){
    
    int type;

    cout << "Insert the type of the airplane: " << endl;
    cin >> type;

    Airplane *airp1 = new Airplane(type);

    airp1->print();

    return 0;
}