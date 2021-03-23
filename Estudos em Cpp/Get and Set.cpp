#include <iostream>
#include <string>
#include "Get and Set.hpp"

using namespace std;


int main(){
    
    int type;

    cout << "Insert the airplane type: ";
    cin >> type;

    Airplane *airp = new Airplane(type);

    cout << "The airplane "<< type << " max speed is: " << airp->get_maxSpeed() << endl;

    if(airp -> get_state() == 1){
        cout << endl << "Airplane is on" << endl;
    }
    else{
        cout << endl << "Airplane is off" << endl;
    }
    
    return 0;
}