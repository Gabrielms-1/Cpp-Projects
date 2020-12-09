#include <iostream>

void bubble_sort (int vetor[], int size) {
    int k, j, aux, i;
    for (k = 1; k < size; k++) {

        for (j = 0; j < size - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    for(k = 0; k < size; k++){
        std::cout << vetor[k];
    }
}


int main(){
  int size, i;

  std::cout << "Insira o tamanho do vetor: ";
  std::cin >> size;

  int vetor[size];

  for(i = 0; i < size; i++){
      std::cout << "Insira o elemento " << i+1 << " do vetor: ";
      std::cin >> vetor[i];
  }
  bubble_sort(vetor, size);
}