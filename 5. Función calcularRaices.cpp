#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

void calcularRaices(double a, double b, double c, complex<double>& raiz1, complex<double>& raiz2, bool& sonReales) {
    double discriminante=b*b-4*a*c;

    if (discriminante>=0) {
        sonReales = true;
        raiz1=(-b + sqrt(discriminante)) / (2 * a);
        raiz2=(-b - sqrt(discriminante)) / (2 * a);
    } else {
        sonReales = false;
        raiz1 = complex<double>(-b / (2 * a), sqrt(-discriminante) / (2 * a));
        raiz2 = complex<double>(-b / (2 * a), -sqrt(-discriminante) / (2 * a));
    }
}

int main() {
    double a, b, c;
    complex<double> raiz1, raiz2;
    bool sonReales;

	cout<<">>>>>>El programa se ha iniciado correctamente<<<<<<"<<endl;

    cout<<"Ingrese los coeficientes a, b y c de la ecuación cuadratica: ";
    cin>>a>>b>>c;

    calcularRaices(a, b, c, raiz1, raiz2, sonReales);

    if (sonReales) {
        cout<<"Las raices son reales:"<<endl;
        cout<<"Raiz 1: "<<raiz1<<endl;
        cout<<"Raiz 2: "<<raiz2<<endl;
    } else {
        cout<<"Las raices son complejas:"<<endl;
        cout<<"Raiz 1: "<<raiz1<<endl;
        cout<<"Raiz 2: "<<raiz2<<endl;
    }

	cout<<">>>>>>El programa ha finalizado correctamente<<<<<<";
	
    return 0;
}

