#include<iostream>
#include<cmath>

using namespace std;

double areac(double raio){
    return M_PI*pow(raio,2);
}

int main(){
    double raio;
    cout<<"Digite o raio: ";
    cin>>raio;
    double area = areac(raio);
    cout<<"A area do circulo eh: "<<area<<endl;
    
    return 0;
}
