#include<iostream>
#include<cmath>

using namespace std;

void volume(){
    double raio, volume;
    cout<<"Digite o raio da esfera: ";
    cin>>raio;

    volume = (4.0/3.0)*M_PI*pow(raio,3);

    cout<<"O volume da esfera eh: "<<volume<<endl;
    
}

int main(){

    volume();
    return 0;

}