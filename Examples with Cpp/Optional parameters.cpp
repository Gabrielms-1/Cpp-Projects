#include <iostream>

using namespace std;

void text(string txt=" ");  // function default arg

int main(){
    
    text(); // function call without args
    
    return 0;
}

void text(string txt){
    cout << endl << txt << endl;
}