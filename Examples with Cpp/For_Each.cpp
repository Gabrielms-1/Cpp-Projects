#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    vector<int>n{1, 2, 3, 4, 5, 6, 7, 8};

    cout << "Printing with iterator" << endl;
    for(auto it = n.begin(); it!=n.end(); it++){
        cout << *it << endl;
    }
    
    cout << "Printing with for-range" << endl;
    for(auto it:n){
        cout << it << endl;
    }

    cout << "Printing with for_each()" << endl;
    for_each(n.begin(), n.end(), [](int num){
        cout << num << endl;
    });
    // SYNTAX OF for_each(first element, last element, function to pass elements)
    // 'num' belongs only to the scope of for_each
    return 0;
}