#include<iostream>

using namespace std;

int verificar(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;

    cout<<"Digite um numero inteiro: ";
    cin>>n;

    int result = verificar(n);

    if(result==1){
        cout<<n<<" eh par"<<endl;
    }
    else{
        cout<<n<<" eh impar"<<endl;
    }
    return 0;
}