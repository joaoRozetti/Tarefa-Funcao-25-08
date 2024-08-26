#include <iostream>
using namespace std;

int num, fatorial;

void calcularFatorial() {
    fatorial = 1;
    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }
}

int main() {
    cout << "Digite um número natural: ";
    cin >> num;

    calcularFatorial();

    cout << "O fatorial de " << num << " é " << fatorial << endl;

    return 0;
}
