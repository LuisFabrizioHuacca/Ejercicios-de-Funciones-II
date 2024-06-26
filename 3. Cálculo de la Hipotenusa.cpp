#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;
    
    cout<<"El programa se ha iniciado correctamente"<<endl;

    cout<<"Introduce el primer cateto: ";
    cin>>cateto1;

    cout<<"Introduce el segundo cateto: ";
    cin>>cateto2;

    hipotenusa=sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    cout<<"La hipotenusa del triangulo es: "<<hipotenusa<<endl;

    return 0;
}

