#include<iostream>

using namespace std;

void verificar(){
    int n;
    cout<<"Digite um numero inteiro: ";
    cin>>n;

    if (n%4==0){
        cout<<n<<" eh multiplo de 4"<<endl;
    }
    else{
        cout<<n<<" nao eh multiplo de 4"<<endl;
    }
}

int main(){
    verificar();
    return 0;
}