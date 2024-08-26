#include<iostream>
#include<cmath>

using namespace std;

double volumer(double raio){
    return (4.0/3.0)*M_PI*pow(raio,3);
}

int main(){
    double raio;
    cout<<"Digite o raio da esfera: ";
    cin>>raio;

    double volume = volumer(raio);
    cout<<"O volume da esfera eh: "<<volume<<endl;

    return 0;
}
