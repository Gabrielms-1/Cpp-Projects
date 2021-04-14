#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void sortNums(int *_nums, int len);
void binarySearch(int *_nums, int _wantedNum, int len);

int main(){
    int nums[] = {63, 61, 38, 91, 75, 27, 90, 88, 143, 115, 149, 90, 11, 33, 62, 64, 23, 146, 4, 36, 85, 118, 32, 80, 15, 42, 82, 129, 57, 18, 123, 123, 115, 
9, 84, 111, 40, 107, 76, 135, 118, 146, 29, 118, 38, 16, 117, 42, 91, 115, 87, 25, 128, 110, 97, 4, 70, 41, 81, 132, 87, 13, 46, 74, 87};
    int wantedNum, arrayLen;

    arrayLen = (sizeof(nums)/sizeof(int));
    
    cout << "What number do you want? ";
    cin >> wantedNum;
    
    sortNums(nums, arrayLen);
    binarySearch(nums, wantedNum, arrayLen);

}

void sortNums(int *_nums, int len){
    int x, y, aux;

    // BUBBLE SORT
    for(x = 0; x < len; x++){
        for(y = x + 1; y < len; y++){
            if(_nums[x] > _nums[y]){
                aux = _nums[x];
                _nums[x] = _nums[y];
                _nums[y] = aux;
            }
        }
    }
}

void binarySearch(int *_nums, int _wantedNum, int len){
    int lLimit = 0;
    int rLimit = len;
    int pivot, position;

    while(lLimit <= rLimit){
        pivot = (lLimit + rLimit)/2;
        if(_wantedNum == _nums[pivot]){
            position = pivot;
            cout << "Your number is on the " << position << " position!" << endl;
        }
        
        if(_nums[pivot] < _wantedNum){
            lLimit = pivot + 1;
        }
        else{
            rLimit = pivot - 1;
        }
    }
    if(_nums[position] != _wantedNum){
        cout << endl << "Number not found =(" << endl;
    }
}

