#include <iostream>
#include <vector>

using namespace std;

struct Human{
    string name;
    int age;
};

class Vehicle{
    public:
        int type;
        string name;
};

int main(){

    int num{10};
    string name{"Gabriel"};
    vector<int>values{1,2,3,4,5};

    Human h1{"Gabriel", 24};
    Human h2{"John", 25};

    Vehicle v1{1, "Carango"};

    cout << num << endl;
    cout << name << endl;
    
    for(vector<int>::iterator it = values.begin(); it != values.end(); it++){
        cout << *it << endl;
    }

    cout << h1.name << " - " << h1.age << endl;
    cout << h2.name << " - " << h2.age << endl;

    cout << v1.type << " - " << v1.name << endl;

    return 0;
}