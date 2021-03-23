#include <iostream>
using namespace std;

void sobrecarga();
void sobrecarga(int a, int b);

int main(){
    sobrecarga();
    sobrecarga(1,2);
    return 0;
}

void sobrecarga(){
    cout << "Aqui a função sobrecarga possui 0 argumentos" << endl;
}

void sobrecarga (int a, int b){
    cout << "Aqui a função sobrecarga possui 2 parametros" << endl;
}