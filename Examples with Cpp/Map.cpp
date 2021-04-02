#include <iostream>
#include <map>

using namespace std;

int main(){

    // key int, value string
    map<int, string>prods;
    
    // inserts a pair that must have the same types as the map
    prods.insert(pair<int, string>(1, "Mouse"));
    prods.insert(pair<int, string>(2, "Keyboard"));
    prods.insert(pair<int, string>(3, "Soundbox"));
    prods.insert(pair<int, string>(4, "Screen"));

    //Iterator
    cout << "____Printing with iterator" << endl;
    for(auto it = prods.begin(); it!=prods.end(); it++){
        cout << it->first << " - " << it->second << endl;
    }
    
    //For-range
    cout << "____Printing with for-range" << endl;
    for(auto it:prods){
        cout << it.first << " - " << it.second << endl;
    }

    //Find
    cout << "____Using FIND method to find an element by the key " << endl;
    map<int, string>::iterator itmap;
    itmap = prods.find(3);
    if(itmap == prods.end()){
        cout << "Product not find! " << endl;
    } else {
        cout << "// Product in storage //" << endl;
        cout << "Code: " << itmap->first << " - Product: " <<itmap->second << endl;
    }

    //Erase elements of map
    cout << "____Erasing the element with key 2 (not the second element)" << endl;
    prods.erase(2);
    //prods.erase(prod.begin(), prods.find(x)) erase from the beginning until x  
    for(auto it:prods){
        cout << it.first << " - " << it.second << endl;
    }

    //Clearing the map
    cout << "____Erasing ALL the map: " << endl;
    prods.clear();
    if(!prods.empty()){
        for(auto it:prods){
            cout << it.first << " - " << it.second << endl;
        }
    }
    else{
        cout << "[[Empty map!]]" << endl;
    }

    return 0;
}