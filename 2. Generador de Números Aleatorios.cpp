#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

	cout<<"El programa se ha ejecutado correctamente"<<endl;
	
    int cantidad;
    cout<<"Introduce la cantidad de numeros aleatorios a generar: ";
    cin>>cantidad;

    if(cantidad<=0) {
        cout<<"La cantidad debe ser un numero positivo."<<endl;
        return 1;
    }

    int maximo;
    cout<<"Introduce el valor maximo permitido: ";
    cin>>maximo;

    if (maximo<=0) {
        cout<<"El valor maximo debe ser un numero positivo."<<endl;
        return 1;
    }

    cout<<"Numeros aleatorios generados:\n";
    for (int i=0; i<cantidad; i++) {
        int numeroAleatorio = rand() % (maximo + 1);
        cout<<numeroAleatorio<<" ";
    }
    cout<<endl;

    return 0;
}

