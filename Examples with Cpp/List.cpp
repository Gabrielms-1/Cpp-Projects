#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

int main(){
    
    list<int> numbers;  // create a list
    list<int> numbersB; // list's clone
    list<int> merged;   // a merge list
    list<int> mergedB;  // list's clone
    int i, size = 10;

// adding random ints to "numbers" list
    do{
        numbers.push_front(rand() % 100);   // add random int < 100 to list
    } while(numbers.size() < size);     // while list size is not over their size

//  cloning the lists
    numbersB = numbers;

    cout << "List size: " << numbers.size() << endl;
    cout << "List 1 without .sort: " << endl;
    
// print all the elements of the list using de list's clone    
    while(!numbersB.empty()){   // while list's clone is not empty
         cout << "- " << numbersB.front() << endl;   // print the front member of list's clone
        numbersB.pop_front();   // delete the front member of list's clone
    }

// adding random ints to "merged" list
    do{
        merged.push_front(rand() % 200 + 100);   // add random int < 100 to list
    } while(merged.size() < size);
    
    mergedB = merged;

// print all the elements of the list using de list's clone    
    cout << "List 2 without .sort: " << endl;
    while(!mergedB.empty()){   // while list's clone is not empty
         cout << "- " << mergedB.front() << endl;   // print the front member of list's clone
        mergedB.pop_front();   // delete the front member of list's clone
    }

// merging the two lists    
    merged.merge(numbers);
    mergedB = merged;

// sorting the elements of the clone "merged" list
    mergedB.sort();

// printing the merged list elements
    cout << "List after merge and sort: " << endl;
    while(!mergedB.empty()){   // while list's clone is not empty
        cout << "- " << mergedB.front() << endl;   // print the front member of list's clone
        mergedB.pop_front();   // delete the front member of list's clone
    }

    cout << "List size: " << merged.size() << endl;     // keep the original merged list
}