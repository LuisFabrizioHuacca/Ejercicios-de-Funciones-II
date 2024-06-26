#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {
    double a, b, c;

	cout<<"El programa se ha iniciado correctamente"<<endl;
	
    cout<<"Introduce el coeficiente a: ";
    cin>>a;

    cout<< "Introduce el coeficiente b: ";
    cin>>b;

    cout<<"Introduce el coeficiente c: ";
    cin>>c;

    double discriminante=b*b-4*a*c;

    if (discriminante>0) {
        double raiz1=(-b + sqrt(discriminante)) / (2 * a);
        double raiz2=(-b - sqrt(discriminante)) / (2 * a);
        cout<<"Las ra�ces son reales y distintas." << endl;
        cout<<"Ra�z 1: "<<raiz1<<endl;
        cout<<"Ra�z 2: "<<raiz2<<endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        cout<<"Las ra�ces son reales y iguales."<<endl;
        cout<<"Ra�z: "<<raiz<<endl;
    } else {
        complex<double> raiz1 = complex<double>(-b, sqrt(-discriminante)) / (2.0 * a);
        complex<double> raiz2 = complex<double>(-b, -sqrt(-discriminante)) / (2.0 * a);
        cout<<"Las ra�ces son complejas y distintas."<<endl;
        cout<<"Ra�z 1: "<<raiz1<<endl;
        cout<<"Ra�z 2: "<<raiz2<<endl;
    }

    return 0;
}

