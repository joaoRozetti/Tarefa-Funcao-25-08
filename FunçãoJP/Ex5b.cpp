#include<iostream>

using namespace std;

int fatorial(int n){
    int fatorial = 1;
    for(int i = 1; i <= n; i++){
        fatorial *= i;
    }
    return fatorial;
}

int main(){
    int n;
    cout<<"Digite um numero: ";
    cin>>n;

    int resultado = fatorial(n);

    cout<<"O fatorial de "<<n<<" eh: "<<resultado<<endl;
}