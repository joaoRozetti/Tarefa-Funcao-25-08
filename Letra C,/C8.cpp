#include<iostream>

using namespace std;

bool bissexto(int ano){
    return (ano%4==0 && ano%100 !=0) || (ano%400==0);
}

int main(){
    int ano;
    cout<<"Digite o ano: ";
    cin>>ano;
    if(bissexto(ano)){
        cout<<ano<<" eh um ano bissexto. "<<endl;
    }
    else{
        cout<<" nao eh um ano bissexto. "<<endl;
    }

    return 0;
}