#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main(){

  [](){}; // this is already a declared expression!
  /*[] variable capture
    () parameters
    {} function content
  */

  srand(time(NULL));

  auto bigger = [](vector<int>vect) -> int{
      
      auto bigg = 0;
      for(int x:vect){
          cout << "[" << x << "]" << endl;
          bigg = (bigg > x)? bigg:x;
      }
      cout << "Bigger: ";
      return bigg;
  };

  /*auto sum = [=]() -> int{   [=] takes all the variables in the scope
    return x1 + x2 + x3 +...;
  }; */

  vector<int>vect2;
  for(int i = 0; i < 10; i++){
      vect2.push_back(rand()%30);
  }

  //cout << bigger({1, 3, 6}) << endl;
  cout << bigger({vect2});

  return 0;
}
