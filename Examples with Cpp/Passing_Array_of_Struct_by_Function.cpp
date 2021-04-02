#include <iostream>
#include <string>

using namespace std;

struct airplane{
    string name;
    string color;
    int passengers;
    float maxSpeed;

};

//functions prototype
void insertAirplanes(int quant, struct airplane airp[]);
void showAirplanes(int quant, struct airplane airp[]);


int main(){
    
    int quant;  // numbers of airplanes
    cout << "How many airplanes do you want to register? ";
    cin >> quant;
    
    airplane *airp = new airplane[quant]; // array of struct type
    
    insertAirplanes(quant, airp);   // insert airplane function call passing quant and airplanes array
    showAirplanes(quant, airp);     // show airplanes function call passing quant and airplanes array
    
    return 0;

}

void insertAirplanes(int quant, struct airplane airp[]){        // creation of the insert airplanes function passing quant and the array
    
    cout << endl;
    int i;
    
    for(i = 0; i < quant; i++){             // get airplanes info
        cout << "Enter the name of the #" << i + 1 << " airplane: ";
        cin.ignore();       
        getline(cin, airp[i].name);     // getline to ignore the space char in the airplane name
        
        cout << "Enter the color of this airplane: ";
        cin >> airp[i].color;
        
        cout << "Enter the number of passengers of this airplane: ";
        cin >> airp[i].passengers;
        
        cout << "Enter the max speed of this airplane: ";
        cin >> airp[i].maxSpeed;
        cout << endl;
    }
}

void showAirplanes(int quant, struct airplane airp[]){      // creation of the show airplanes function passing quant and the array
    
    int i = 0;

    for (i = 0; i < quant; i++){        // print of all the airplanes attributes
        cout << endl << " ----- Airplane #" << i + 1 << endl;
        cout << "Name --- " << airp[i].name << endl;
        cout << "Color --- " << airp[i].color << endl;
        cout << "Capacity --- " << airp[i].passengers << endl;
        cout << "Max Speed --- " << airp[i].maxSpeed << endl;
    }
}
