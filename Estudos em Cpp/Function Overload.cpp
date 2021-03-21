#include <iostream>
using namespace std;

void sobrecarga();
void sobrecarga(int a, int b);

int main(){
    overload();
    overload(1,2);
    return 0;
}

void sobrecarga(){
    cout << "here the function has NO arguments" << endl;
}

void sobrecarga (int a, int b){
    cout << "ere the function has TWO arguments" << endl;
}
