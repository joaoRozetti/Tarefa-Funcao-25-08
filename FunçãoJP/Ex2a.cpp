#include<iostream>

using namespace std;

void verificar(){
    int n;

cout<<"Digite um numero inteiro: ";
cin>>n;

if(n%2==0){
    cout<<n<<" eh par"<<endl;
}
else{
    cout<<n<<" eh impar"<<endl;
}

}
int main(){
    verificar();
    return 0;
}
