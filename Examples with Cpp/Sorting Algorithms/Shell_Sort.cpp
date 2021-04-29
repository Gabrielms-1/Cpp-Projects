#include <iostream>

using namespace std;

void shellSort(int *_nums, int start, int end, int len);
void printVector(int* _nums, int len);

int main(){
    int nums[] = {63, 61, 38, 91, 75, 27, 90, 88, 143, 115, 149, 90, 11, 33, 62, 64, 23, 146, 4, 36, 85, 118, 32, 80, 15, 42, 82, 129, 57, 18, 123, 123, 115, 
9, 84, 111, 40, 107, 76, 135, 118, 146, 29, 118, 38, 16, 117, 42, 91, 115, 87, 25, 128, 110, 97, 4, 70, 41, 81, 132, 87, 13, 46, 74, 87};
    int arrayLen;
    
    arrayLen = (sizeof(nums)/sizeof(int));

    shellSort(nums, 0, arrayLen, arrayLen);
    printVector(nums, arrayLen);

    return 0;
}

void shellSort(int*_nums, int start, int end, int len){
    
    int i, j, current;
    int h = 1;

    
    while(h < len){
        h = 3 * h + 1;
    }
    while(h > 1){
        h = h/3;

        for(i = h; i < len; i++){
            current = _nums[i];
            j = i - h;

            while((j >= 0) && (current < _nums[j])){
                _nums[j+h] = _nums[j];
                j = j - h;
            }
            _nums[j+h] = current;
        }
    }

    
}

void printVector(int* _nums, int len){
    for(int i = 0; i < len; i++){
        cout << "[" << _nums[i] << "]" << endl;
    }
}