#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void selectionSort(int *_nums, int _len);

int main(){
    int nums[] = {63, 61, 38, 91, 75, 27, 90, 88, 143, 115, 149, 90, 11, 33, 62, 64, 23, 146, 4, 36, 85, 118, 32, 80, 15, 42, 82, 129, 57, 18, 123, 123, 115, 
9, 84, 111, 40, 107, 76, 135, 118, 146, 29, 118, 38, 16, 117, 42, 91, 115, 87, 25, 128, 110, 97, 4, 70, 41, 81, 132, 87, 13, 46, 74, 87};
    int arrayLen;
    
    arrayLen = (sizeof(nums)/sizeof(int));

    selectionSort(nums, arrayLen);

    return 0;
}

void selectionSort(int *_nums, int _len){
    int aux, smPos, i, j;

    for(i = 0; i < _len; i++){
        smPos = i;

        for(j = i + 1; j < _len; j++){
            if(_nums[j] < _nums[smPos]){
                smPos = j;
            }
        }
    

        if(smPos != i){
            aux = _nums[i];
            _nums[i] = _nums[smPos];
            _nums[smPos] = aux;
        }
    }

    for(i = 0; i < _len; i++){
        cout <<"[" << _nums[i] << "]";
    }
}