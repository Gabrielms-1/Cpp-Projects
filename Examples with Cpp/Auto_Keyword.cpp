#include <iostream>
#include <vector>

using namespace std;

auto sum(double n1, double n2) -> int;
string name();

int main(){

// auto keyword - the type of the variable will be automatically deducted from its initializer
    //auto num;     ->
    //num = 10;     -> error
    
    //num = "gabriel" -> error

    auto num = 10; // correct declaration

    auto answer = sum(10.3, 5.1);
    cout << answer << endl;
    
    auto answer2 = name();
    cout << answer2 << endl;
    
    vector<int> vect {10, 20, 30, 40, 50};
    
    /*for(vector<int>::iterator it = vect.begin(); it!= vect.end(); it++){
        cout << *it << endl;
    }*/

    for(auto it = vect.begin(); it!= vect.end(); it++){
        cout << *it << endl;
    }
    
    return 0;
}

auto sum(double n1, double n2) -> int{
    return n1 + n2;
}

string name(){
    return "Gabriel";
}