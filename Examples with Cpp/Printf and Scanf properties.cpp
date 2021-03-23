#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int intg = 1;
    float flt = 0.5;
    double dbl = 1.2;
    unsigned unsInt = 5;
    char *pointer;
    char aux = 't';
    char hex = 15;

    pointer = &aux;

    printf("int: %d, \nfloat: %lf, \ndouble: %f, \nunsigned int: %u, \nchar/string pointer: %s, \npointer adress: %p, \nhexadecimal 15: %X" , 
        intg, flt, dbl, unsInt, pointer, pointer, hex);

    char name[4];
    
    name[0] = 'J';
    name[1] = 'o';
    name[2] = 'h';
    name[3] = 'n';

    printf("\nName: %s\n" , name);

    cout << " - - - - - - \ncout precision: \n";
    cout.precision(8);      // set the precision of the cout var
    cout << "PI with precision 7: " << setw(15) << M_PI << endl;        // setw define the blank space on the cout method
    return 0;
}

/*
d, i = int
x, X = hexadecimal
u    = unsigned int
s    = string, char*
f    = double
lf   = float
p    = pointer
*/