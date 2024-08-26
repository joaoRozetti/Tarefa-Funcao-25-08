#include<iostream>

using namespace std;

bool multq(int n){
    return n%4==0;
}

int main(){
    int n;
    cout<<"Digite um numero inteiro: ";
    cin>>n;

    if(multq(n)){
        cout<<n<<" eh multiplo de 4"<<endl;
    }
    else{
        cout<<"nao eh multiplo de 4"<<endl;
    }
    return 0;
}