#include <iostream>
#include <vector>

using namespace std;

void sum(){
    //auto i = 0; set i = 0 on every function call
    static auto i = 0;  // stores this variable in one memory adress only, doesnt initialize the variable again  
    i++;
    cout << i << endl;
}

int main(){

    sum();  // i = 1
    sum();  // i = 2
    sum();  // i = 3
    sum();  // i = 4
    sum();  // i = 5
    sum();  // i = 6

    return 0;
}