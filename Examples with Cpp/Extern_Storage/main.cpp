#include <iostream>

using namespace std;

void printNum();
void printValue();

int num = 10;
extern int value;

int main(){

    printNum();
    printValue();

    return 0;
}

void printValue(){
    cout << value << endl;
}