#include <iostream>
#include <array>

using namespace std;

int main(){
    
    int *pointer;
    int array[10];

    for(int i = 0; i < (sizeof(array)/sizeof(*array)); i++){        // sizeof(array) = size of array (10) * size of int (4) = 40
        pointer = array+i;                                          // so real size of array = sizeof(array)/size of int
        cout << "Element " << i+1 << " of array adress" << " - " << pointer << endl;
    }
    
    int *pointer2;
    int array2[10];

    cout << " - - - - - - - - - - - - - - - - " << endl;

    for(int i = 0; i < (sizeof(array2)/sizeof(*array2)); i++){        
        pointer2 = &array2[i];
        *pointer2 = i+i;    // array[i] = i+i
        *(pointer2+=1);
        cout << "Element " << i+1 << " is: " << " - " << array2[i] << endl;
    }

    return 0;
}