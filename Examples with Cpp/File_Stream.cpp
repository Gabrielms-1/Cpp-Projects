#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>

using namespace std;

int main(){
  
    //OFSTREAM  (Write)
    ofstream fileOut;

    fileOut.open("file_stream.txt", ios::app);
    fileOut << "Example 2 of stream in txt files\n";

    fileOut.close();

    
    // IFSTREAM  (Read)
    ifstream fileIn;
    string line;

    fileIn.open("file_stream.txt");
    if(fileIn){
        while(getline(fileIn, line)){
            cout << line << endl;
        }
    }
    else{
        cout << "File is not opened!" << endl;
        
    }

    fileIn.close();
    
    
    //FSTREAM  (Read and Write)
    fstream fileInOut;
    char opt = 's';
    string name, line;

    fileInOut.open("file_stream.txt", ios::out);

    cout << "Insert one name" << endl;
    cin >> name;
    fileInOut << name << endl;
    system("clear");

    fileInOut.close();

    fileInOut.open("file_stream.txt", ios::in);

    if(fileInOut){
        while(getline(fileInOut, line)){
            cout << line << endl;
        }
    }
    else{
        cout << "File error!!!" << endl;
    }

    fileInOut.close();

    return 0;
}