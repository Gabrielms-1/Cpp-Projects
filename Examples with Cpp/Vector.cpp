#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &vect, int size);
int insertVector(vector<int> &vect);
void swapVector(vector<int> &vect, vector<int> &vect2, int size);

int main(){

    vector<int> letters, numbers;
    
    int size;

    size = insertVector(letters);
    printVector(letters, size);  
    size = insertVector(numbers);  
    printVector(numbers, size);
    swapVector(letters, numbers, size);

}   

void printVector(vector <int> &vect, int size){
    cout << " - - - - - - " << endl;
    for(int i = 0; i < size; i++){
        cout << "Member #" << i+1 << " - " << vect[i] << endl;
    }
}

int insertVector(vector<int> &vect){
    
    int size;
    vect.push_back(rand()% 50);
    vect.push_back(rand()% 50);
    vect.push_back(rand()% 50);
    size = vect.size();

    return size;
}

void swapVector(vector<int> &vect, vector<int> &vect2, int size){
    
    vect.swap(vect2);
    
    cout << " - - - - Vectors after swap method:  " << endl;
    for(int i = 0; i < size; i++){
        cout << "Member #" << i+1 << " - " << vect[i] << endl;
    }

    cout << " - - - - - - " << endl;

    for(int i = 0; i < size; i++){
        cout << "Member #" << i+1 << " - " << vect2[i] << endl;
    }
}

/*  vector.insert(vector.end()-1, 99)   // insert '99' on last but one position
    vector.erase(vector.end()-2);       // delete the 99
    vector.clear()                      // delete all elements
    vector.popback()                    // delete the last element
    vector.resize(5)                    // resize the vector to 5 elements
    vector.resize(8, 50)                // resize the vector to 8 elements and fill the empty elements with 50
    !vector.empty()                     // while vector is not empty
*/