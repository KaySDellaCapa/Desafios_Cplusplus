#include <iostream>

using namespace std;

// Não retorna nada essa função
// Com o & vai a troca no main
void troca(int *&pont1, int *&pont2) {
  int temp; // vai fazer a troca entre os dois valores, vai armazenar
            // temporariamente nessa variavel

  // Fazendo a troca
  temp = *pont1;
  *pont1 = *pont2;
  *pont2 = temp; // Aqui foi jogado no pont2
}

int main() {
  int *pont1 = new int;
  *pont1 = 5;
  int *pont2 = new int;
  *pont2 = 7;

  // Vai pedir para imprimir o endereço, ou seja, sem o *. O * carrega o valor.
  // E depois o valor de endereço.
  cout << "Ponteiro 1: " << pont1 << " e " << *pont1 << endl;
  cout << "Ponteiro 2: " << pont2 << " e " << *pont2 << endl;

  troca(pont1, pont2);
  // Faz a mesma impressão após realizar a troca
  cout << "Ponteiro 1: " << pont1 << " e " << *pont1 << endl;
  cout << "Ponteiro 2: " << pont2 << " e " << *pont2 << endl;

  return 0;
}
