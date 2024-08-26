#include<iostream>

using namespace std;

void potencia(){
    int base, exp;
    int resultado = 1;

    cout<<"Digite a base: ";
    cin>>base;

    cout<<"Digite o expoente: ";
    cin>>exp;

    for(int i = 0; i < exp; i++){
        resultado *= base;
    }

    cout<<"Resultado de "<<base<<"^"<<exp<<" = "<<resultado<<endl;

}

int main(){
    potencia();
    return 0;
}