
#include <iostream>

using namespace std;

int main() {
  float n1, n2, n3, mediaturma;
  cout << "Digite a nota 1:\n";
  cin >> n1;
  cout << "Digite a nota 2:\n";
  cin >> n2;
  cout << "Digite a nota 3:\n";
  cin >> n3;
  cout << "Digite a nota da turma:\n";
  cin >> mediaturma;

  float mediaaluno = (n1 + n2 + n2) / 3;
  cout << "A média final do aluno é: " << mediaaluno << endl;

  if (mediaaluno < mediaturma) {
    cout << "Aluno abaixo da média";
  } else if (mediaaluno == mediaturma) {
    cout << "Aluno está na média";
  } else {
    cout << "O aluno está acima da média";
  }

  return 0;
}
