#include <iostream>

using namespace std;

// saida da função
float potencia(float x, int y) {
  float pot = 1;
  int cont = 1; // vai contar quantas vezes passa a repetição
  while (cont <=
         y) { // Roda até ser menor que Y. Se o y for zero não passa nenhuma vez
    pot *= x;
    cont++; // conta até chegar no valor
  }
  return pot;
}

int main() {
  float b;
  int e;
  while (1) {
    cout << "Digite a base (numero real)\n";
    cin >> b;
    cout << "Digite o expoente (numero natural)\n";
    cin >> e;

    float respostapotencia = potencia(b, e);
    cout << "O resultado de " << b << " elevado a " << e
         << " é igual a: " << respostapotencia << endl;
    int q;
    cout << "Digite 1 se quiser calcular outra potencia, e 0 se não quiser\n";
    cin >> q; // armazena o 1 ou o 0
    if (q == 0) {
      break;
    }
  }

  return 0;
}
