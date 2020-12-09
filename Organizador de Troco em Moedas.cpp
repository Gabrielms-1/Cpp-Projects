#include <iostream>

int main(){
  int i, valor, troco[] {1, 5, 10, 25};
  std::cout << "Insira o valor: ";
  std::cin >> valor;
  for(i = 3; i >= 0; i--){
    while(troco[i] <= valor){
      std::cout << std::endl << "Uma moeda de " << troco[i];
      valor = valor - troco[i];
    }
  }

}