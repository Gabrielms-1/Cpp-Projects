#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string>products = {"mouse", "keyboard", "cpu", "earphone", "cables"};
    vector<string>::iterator it;

    it = products.end()-1;

    for(it = products.begin(); it != products.end(); it++){
        cout << *it << endl;
    }
    
    return 0;
}