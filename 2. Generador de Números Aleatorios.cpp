#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int cantidad;
    cout<<"Introduce la cantidad de n�meros aleatorios a generar: ";
    cin>>cantidad;

    if(cantidad<=0) {
        cout<<"La cantidad debe ser un n�mero positivo."<<endl;
        return 1;
    }

    int maximo;
    cout<<"Introduce el valor m�ximo permitido: ";
    cin>>maximo;

    if (maximo<=0) {
        cout<<"El valor m�ximo debe ser un n�mero positivo."<<endl;
        return 1;
    }

    cout<<"N�meros aleatorios generados:\n";
    for (int i=0; i<cantidad; i++) {
        int numeroAleatorio = rand() % (maximo + 1);
        cout<<numeroAleatorio<<" ";
    }
    cout<<endl;

    return 0;
}

