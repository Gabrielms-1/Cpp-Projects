#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int vector[] = {1, 3, 5, 6, 7, 9, 0};
    int *p;
    int num;

    cin >> num;
    size_t len = sizeof vector/4;
    p = find(vector, vector+len, num);
    
    if(p != vector+len){
        cout << "Element found!" << endl;
    } else {
        cout << "Element NOT found!" << endl;
    }

    return 0;
}