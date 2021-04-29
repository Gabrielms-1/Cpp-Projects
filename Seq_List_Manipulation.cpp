#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

struct person{
    string name;
    int rg;
};

int menu();
void clearScreen();

void insertBeg(person *&_seqPtr, int *_listSize);                               // 1
void insertEnd(person *&_seqPtr, int *_listSize, int *_listPosition);           // 2
void insertOn(person *&_seqPtr, int *_listSize, int _position);                 // 3
void removeBeg(person *&_seqPtr, int *_listSize);                               // 4
void removeEnd(person *&_seqPtr, int *_listSize, int *_listPosition);           // 5
void removeOn(person *&_seqPtr, int *_listSize, int _position);                 // 6
string printByRG(person *&_seqPtr, int *_listSize, int rg, int *_position);     // 7
void printList(person *seqPtr, int listSize);                                   // 8

int main(){
    
    int listSize = 0;
    int position, listPosition, rg;
    person *seqPtr;

    switch(menu()){
        case 1:
            cout << " > [1] - Insert a node at the beginning of the list" << endl;
            insertBeg(seqPtr, &listSize);
            
            clearScreen();
            printList(seqPtr, listSize);
            break;

        case 2:
            cout << " > [2] - Insert a node at the end of the list" << endl;

            if(listSize == 0){
                insertBeg(seqPtr, &listSize);
            }
            else{
                insertEnd(seqPtr, &listSize, &position);
            }

            clearScreen();

            printList(seqPtr, listSize);
            break;

        case 3:
            cout << " > [3] - Insert a node at the specified position" << endl;
            cout << "Insert the position to add a new member: ";
            cin >> position;

            if(position == 0){
                insertBeg(seqPtr, &listSize);
            }
            else if(position == listSize + 1){
                insertEnd(seqPtr, &listSize, &listPosition);
            }
            else{
                insertOn(seqPtr, &listSize, position);
            }

            printList(seqPtr, listSize);
            break;
        
        case 4:
            cout << " > [4] - Remove a node at the beginning of the list" << endl;
            
            if(listSize == 0){
                cout << "Empty list!";
            }
            else{
                removeBeg(seqPtr, &listSize);
            }
        
            break;
        
        case 5:
            cout << " > [5] - Remove a node at the end of the list" << endl;
            
            if(listSize == 0){
                cout << "Empty list!";
            }
            else{
                removeEnd(seqPtr, &listSize, &listPosition);
            }            

            break;
        
        case 6:
            cout << " > [6] - Remove a node at the specified position" << endl;
            
            if(listSize == 0){
                cout << "Empty list!";
            }
            else{
                
                cout << "Insert the position to remove: ";
                cin >> position;
                
                removeOn(seqPtr, &listSize, position);
            }

            break;
        
        case 7:
            cout << " > [7] - Search a node with the specified RG" << endl;
            
            cout << "Insert RG: ";
            cin >> rg;

            printByRG(seqPtr, &listSize, rg, &position);
            
            break;

        case 8:
            cout << " > [8] - Print the list" << endl;
            printList(seqPtr, listSize);
            break;
    }

}

void clearScreen(){
    system("clear");
}

int menu(){
    
    int targetFunction = 0;
    
    cout << "####   Operations  ####" << endl;
    cout << "[1] - Insert a node at the beginning of the list;" << endl;
    cout << "[2] - Insert a node at the end of the list;" << endl;
    cout << "[3] - Insert a node at the specified position;" << endl;
    cout << "[4] - Remove a node at the beginning of the list;" << endl;
    cout << "[5] - Remove a node at the end of the list;" << endl;
    cout << "[6] - Remove a node at the specified position;" << endl;
    cout << "[7] - Search a node with the specified RG;" << endl;
    cout << "[8] - Print the list" << endl;
    cout << "[0] - > EXIT < " << endl;
    cout << endl;
    cout << " --> Choose a number and press [ENTER]" << endl;

    cin >> targetFunction;
    
    while((targetFunction < 0) || (targetFunction > 8)){
        cout << "Invalid input! Enter a number from 0 to 8..." << endl;
        cin >> targetFunction;
    }

    clearScreen();

    return targetFunction;

}

void printList(person *_seqPtr, int _listSize){

    cout << "- List:" << endl;

    if(_listSize == 0){
        cout << "Empty list" << endl;
    }

    for(int i = 0; i < _listSize; i++){
        cout << "[" << i+1 << "]" << " - " << _seqPtr[i].name << ", " << _seqPtr[i].rg << endl;
    }
}

void insertBeg(person *&_seqPtr, int *_listSize){
    
    string name;
    int rg;

    cout << "Insert the name: ";
    cin >> name;
    
    cout << endl;
    cout << "Insert RG: ";
    cin >> rg;

    if(*_listSize == 0){
        person *newList = new person[1];

        newList[0].name = name;
        newList[0].rg = rg;

        _seqPtr = newList;
    }
    else {
        person *copyList = new person[*_listSize + 1];

        copyList[0].name = name;
        copyList[0].rg = rg;

        for(int i = 0; i < *_listSize; i++){
            copyList[i+1].name = _seqPtr[i].name;
            copyList[i+1].rg = _seqPtr[i].rg;
        }

        _seqPtr = copyList;
    }

    *_listSize = *_listSize + 1;
}

void insertEnd(person *&_seqPtr, int *_listSize, int *_listPosition){
   
    string name;
    int rg;
    *_listPosition = *_listSize;

    cout << "Insert the name: ";
    cin >> name;
    
    cout << endl;
    cout << "Insert RG: ";
    cin >> rg;

    person *copyList = new person[*_listSize + 1];

    copyList[*_listSize].name = name;
    copyList[*_listSize].rg = rg;

    for(int i = 0; i < *_listSize; i++){
        copyList[i].name = _seqPtr[i].name;
        copyList[i].rg = _seqPtr[i].rg;
    }

    _seqPtr = copyList;

    *_listSize = *_listSize + 1;

}

void insertOn(person *&_seqPtr, int *_listSize, int _position){

    string name;
    int rg, i;

    cout << "Insert the name: ";
    cin >> name;
    
    cout << endl;
    cout << "Insert RG: ";
    cin >> rg;

    person *copyList = new person[*_listSize + 1];

    for(i = 0; i < _position; i++){
        copyList[i].name = _seqPtr[i].name;
        copyList[i].rg = _seqPtr[i].rg;
    }

    copyList[_position].name = name;
    copyList[_position].rg = rg;

    for(i = _position+1; i < *_listSize+1; i++){
        copyList[i].name = _seqPtr[i-1].name;
        copyList[i].rg = _seqPtr[i-1].rg;
    }

    _seqPtr = copyList;
    *_listSize = *_listSize + 1;
}

void removeBeg(person *&_seqPtr, int *_listSize){
    person *copyList = new person[*_listSize - 1];

    for(int i = 0; i < *_listSize; i++){
        copyList[i-1].name = _seqPtr[i].name;
        copyList[i-1].rg = _seqPtr[i].rg;
    }

    _seqPtr = copyList;

    *_listSize = *_listSize - 1;
}

void removeEnd(person *&_seqPtr, int *_listSize, int *_listPosition){

    *_listPosition = *_listSize - 1;

    person *copyList = new person[*_listSize - 1];

    for(int i = 0; i < *_listSize-1; i++){
        copyList[i].name = _seqPtr[i].name;
        copyList[i].rg = _seqPtr[i].rg;
    }

    _seqPtr = copyList;

    *_listSize = *_listSize - 1;

}

void removeOn(person *&_seqPtr, int *_listSize, int _position){

    person *copyList = new person[*_listSize - 1];

    for(int i = 0; i < *_listSize - 1; i++){
        if(i < _position){
            copyList[i].name = _seqPtr[i].name;
            copyList[i].rg = _seqPtr[i].rg;
        }
        else{
            copyList[i].name = _seqPtr[i+1].name;
            copyList[i].rg = _seqPtr[i+1].rg;
        }
    }

    _seqPtr = copyList;
    *_listSize = *_listSize - 1;

}

string printByRG(person *&_seqPtr, int *_listSize, int _rg, int *position){

    string name = "Not found!";

    for(int i = 0; i < *_listSize; i++){
        if(_seqPtr[i].rg == _rg){
            name = _seqPtr[i].name;
            cout << "Found in " << i << " position.";
        }
    }

    return name;
}



