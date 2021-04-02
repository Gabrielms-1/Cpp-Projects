#include <iostream>
#include <stdio.h>
#include <sstream>


using namespace std;

int main(){
/*    int *vname;
    vname = (int *) malloc(sizeof(int));

    scanf("%d", vname);
    
    cout << *vname << endl;

    free(vname);

    cout << *vname << endl;
*/

    int len, i;

    cin >> len;

    int *vector = new int[len];

    for(i = 0; i < len; i++){
        vector[i] = i;
        cout << char(vector[i]);
    }
    return 0;
}