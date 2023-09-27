/*
  #include <iostream>

using namespace std;

int main() {
  int tamanho, teste;

  // Perguntou o tamanho do vetor(vai ficar repetindo), declarou o vetor, o for
  // para digitar os elementos daquele vetor
  //  for para imprimir os elementos daquele vetor, e agora perguntar se quer
  //  parar ou continuar
  do {
    cout << "Digite o tamanho do vetor\n";
    cin >> tamanho;
    float *vetor = new float[tamanho]; // Declarado de forma dinamica
    for (int i = 0; i < tamanho; i++) {
      cout << "Digite o elemento " << i + 1 << " deste vetor\n";
      cin >> vetor[i];
    }
    cout << "O vetor inserido é:\n [ ";
    for (int i = 0; i < tamanho; i++) {
      cout << vetor[i] << " ";
    }
    cout << "]\n";

    cout << "De deseja inserir outro vetor, digite 1. Senão, digite 0\n";
    cin >> teste;

    delete[] vetor;

  } while (teste != 0);

  return 0;
}
*/