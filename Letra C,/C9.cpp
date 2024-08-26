#include<iostream>

using namespace std;

double converter(double C){
    return C*9/5+32;
}

int main(){
    double C;
    cout<<"Digite a temperatura em graus Celsius: ";
    cin>>C;
    double F = converter(C);
    cout<<"A temperatura em Fahrenheit eh: "<<F<<endl;

    return 0;
}