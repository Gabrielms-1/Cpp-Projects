#include <iostream>

using namespace std;

void quickSort(int *_nums, int start, int end, int len);

int main(){
    int nums[] = {63, 61, 38, 91, 75, 27, 90, 88, 143, 115, 149, 90, 11, 33, 62, 64, 23, 146, 4, 36, 85, 118, 32, 80, 15, 42, 82, 129, 57, 18, 123, 123, 115, 
9, 84, 111, 40, 107, 76, 135, 118, 146, 29, 118, 38, 16, 117, 42, 91, 115, 87, 25, 128, 110, 97, 4, 70, 41, 81, 132, 87, 13, 46, 74, 87};
    int arrayLen;
    
    arrayLen = (sizeof(nums)/sizeof(int));

    quickSort(nums, 0, arrayLen, arrayLen);
    for(int i = 0; i < arrayLen; i++){
        cout << "[" << nums[i] <<"]";
    }
    cout << endl;
    
    return 0;
}

void quickSort(int*_nums, int start, int end, int len){
    
    int lLim, rLim, pivot, mid, aux;

    lLim = start;
    rLim = end;
    mid = (int)((lLim+rLim)/2);
    pivot = _nums[mid];

    while(rLim > lLim){
        while(_nums[lLim] < pivot){
            lLim = lLim + 1;
        }

        while(_nums[rLim] > pivot){
            rLim = rLim - 1;
        }

        if(lLim <= rLim){
            aux = _nums[lLim];
            _nums[lLim] = _nums[rLim];
            _nums[rLim] = aux;

            lLim = lLim + 1;
            rLim = rLim - 1;
        }
    }
    if(start < rLim){
        quickSort(_nums, start, rLim, len);
    }

    if(lLim < end){
        quickSort(_nums, lLim, end, len);
    }
    
}