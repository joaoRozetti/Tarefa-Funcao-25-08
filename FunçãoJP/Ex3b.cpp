#include<iostream>

using namespace std;

int somar(int a, int b){
    int menor = (a<b) ? a : b;
    int maior = (a>b) ? a : b;

    int soma = 0;
    for(int i = menor; i <= maior; i++){
        soma += i;
    }
    return soma;

}

int main(){
    int a,b;

    cout<<"Digite um numero inteiro positivo: ";
    cin>>a;

    while(a<=0){
        cout<<"Numero invalido. Digite outro numero: ";
        cin>>a;
    }

    cout<<"Digite outro numero inteiro positivo: ";
    cin>>b;

    while(b<=0){
        cout<<"Numero invalido. Digite outro numero:  ";
        cin>>b;
    }

    int resultado = somar(a,b);

    cout<<"A soma dos numeros de "<<a<<" ate "<<b<<" eh: "<<resultado<<endl;
}