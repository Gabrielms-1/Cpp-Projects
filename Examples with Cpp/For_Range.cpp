#include <iostream>
#include <vector>

using namespace std;

int main(){

    int x[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //const char[] = "Gabriel"
    //string name = "Gabriel";
    // Same as
    const char* name = "Gabriel";

// Traditional For
    for(int i = 0; i <= sizeof(name); i++){
        cout << name[i];
    }   
    cout << endl;

// For-range declaration
    for(int i:x){
        cout << i << " ";
    }
    cout << endl;
    
    vector<char>vect{'a', 'b', 'c', 'd', 'e'};

    for(auto i:vect){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
