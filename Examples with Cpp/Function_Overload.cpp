#include <iostream>
using namespace std;

void overload();
void overload(int a, int b);

int main(){
    overload();
    overload(1,2);
    return 0;
}

void overload(){
    cout << "here the function has NO arguments" << endl;
}

void overload (int a, int b){
    cout << "ere the function has TWO arguments" << endl;
}
