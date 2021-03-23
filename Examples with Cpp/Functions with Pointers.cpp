#include <iostream>

using namespace std;

void sum(float *var, float value);
void arrayPointer(float *Arr, float arraySize);

int main(){

    float num = 0;
    float array[5];
    
    int arraySize = (sizeof(array)/sizeof(*array));

    sum(&num, 15);      // function call passing var memory adress
    arrayPointer(array, arraySize);
    
    for(int i = 0; i < arraySize; i++){
        cout << array[i] << endl;
    }

    return 0;
}

void sum(float *var, float value){
    //cout << *var << endl;
    *var += value;      // operation modifying the value on var adress apointed by pointer
}

void arrayPointer(float *Arr, float Arrsize){

    for(int i = 0; i < Arrsize; i++){
        Arr[i] = i;
    }
}