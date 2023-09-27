/*
#include <iostream>

using namespace std;

int fat(int x) {
  int fatorial = 1;
  for (int i = 1; i <= x; i++) {
    fatorial *= i;
  }
  return fatorial;
}

int main() {
  int n; // O número informado vai ser depositado aqui
  while (true) {
    cout << "Informe um numero inteiro positivo!\n";
    cin >> n;
    if (n <= 0) {
      cout << "O numero informado é negativo!";
    } else {
      break; // vai ficar no loop até informar positivo, se informar, dá o break
    }
  }

  int valorfat =
      fat(n); // Chama o fatorial, informar o n e vai retornar o n do usuario
  cout << "O valor do fatorial de " << n << " é de: " << valorfat << endl;

  return 0;
}
*/