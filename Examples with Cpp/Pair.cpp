#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){

  const int len = 2;

  pair <int, string> example2[len];
  
// using first-second assignment
  example2[0].first = 1;
  example2[0].second = "Gabriel";
  
// using make_pair assignment
  cout << " - - Pair with 2 elements: " << endl;  
  example2[1]= make_pair(2, "Mendes");
  
  for(int i = 0; i < len; i++){
    cout << example2[i].first << " - " << example2[i].second << endl;
  }

// triple-pair
  cout << " - - Pair with 3 elements: " << endl;    
  //                first, second.first, second.second
  //   first pair of (int + pair of (string + double))
  pair <int, pair<string, double>> example3[len];
  example3[0] = make_pair(1, make_pair("mouse", 5.50));
  example3[1] = make_pair(2, make_pair("keyboard", 15.5));

  for(int i = 0; i < len; i++){
    cout << example3[i].first << " - " << example3[i].second.first << " - " << example3[i].second.second << endl;
  }
  
// with VECTOR!
  cout << " - - Using vector: " << endl;    
  vector<pair<int, string>> example4;

  example4.push_back(make_pair(10, "joystick"));
  example4.push_back(make_pair(20, "console"));

  for(auto i:example4){
    cout << i.first << " - " << i.second << endl;
  }
  

  return 0;
}
