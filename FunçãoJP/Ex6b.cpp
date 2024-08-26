#include<iostream>

using namespace std;

int potencia(int base, int exp){
    int resultado = 1;


for(int i = 0; i < exp; i++){
    resultado *= base;
}
return resultado;

}

int main(){
    int base, exp;

    cout<<"Digite a base: ";
    cin>>base;

    cout<<"Digite o expoente: ";
    cin>>exp;

    int resultado = potencia(base, exp);

    cout<<"Resultado de "<<base<<"^"<<exp<<" = "<<resultado<<endl;

    return 0;
}