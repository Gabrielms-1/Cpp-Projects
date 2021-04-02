#include <iostream>

using namespace std;

int fat(int num);

int main(){
    int number;
    cout << "Insert a number " << endl;
    cin >> number;
    cout << fat(number);
    return 0;
}

int fat(int num){

    if((num == 1) || (num == 0)){  // 1! and 0! = 1
        return 1;
    }
    else 
        return fat(num-1)*num;
}
