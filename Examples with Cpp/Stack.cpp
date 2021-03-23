#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> fruits;  // creating a stack named fruits
    stack <string> fruitsB; // stack clone to dont modify the original stack
    
    fruits.push("apple");       // add 
    fruits.push("pineapple");   // elements
    fruits.push("grape");       // to 
    fruits.push("mango");       // stack

    fruitsB = fruits;

    cout << "Stack size: " << fruits.size() << endl;    // print stack size
    cout << "Stack members:" << endl;   
    
    while(!fruitsB.empty()){       // while clone stack is not empty
        cout << "-" << fruitsB.top() << endl;    // print top element
        fruitsB.pop();   // delete clone stack top element
    }

    return 0;

}