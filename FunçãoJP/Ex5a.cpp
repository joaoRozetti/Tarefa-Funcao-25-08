#include<iostream>

using namespace std;


int n,fat;

void fatorial(){
    fat = 1;
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
}

int main(){
    cout<<"Digite um numero: ";
    cin>>n;

    fatorial();

    cout<<"O fatorial de "<<n<<" eh "<<fat<<endl;

    return 0;
}