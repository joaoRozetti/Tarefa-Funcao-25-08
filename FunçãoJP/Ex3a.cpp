#include<iostream>

using namespace std;

void somar(){
    int a,b;

    cout<<"Digite um numero inteiro positivo: ";
    cin>>a;

    while(a <= 0){
        cout<<"Numero invalido. digite novamente.";
        cin>>a;
    }

    cout<<"Digite outro numero inteiro positivo: ";
    cin>>b;

    while(b <= 0){
        cout<<"Numero invalido. Digite novamente: ";
    }

    int menor = (a < b) ? a : b;
    int maior = (a > b) ? a : b;

    int soma=0;
    for(int i=menor; i<=maior; i++){
        soma +=i;
    }

    cout<<"A soma dos numeros de "<<menor<<" ate "<<maior<<" eh "<<soma<<endl;


}
int main(){
    somar();
    return 0;
}