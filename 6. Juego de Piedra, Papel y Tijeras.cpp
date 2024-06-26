#include <iostream>
#include <cstdlib>
using namespace std;

string j_computadora() {
    int numero = rand() % 3;

    if (numero == 0) {
        return "piedra";
    } else if (numero == 1) {
        return "papel";
    } else {
        return "tijera";
    }
}

int main() {
    int p_jugador = 0, puntos_computadora = 0;
    string jugador, computadora;

	cout<<">>>>>>El programa se ha iniciado correctamente<<<<<<"<<endl;

    do {
        cout << "Ingrese su jugada, (piedra, papel o tijera): ";
        cin >> jugador;
        while (jugador != "piedra" && jugador != "papel" && jugador != "tijera") {
            cout << "Jugada invalida, por favor ingrese solo piedra, papel o tijera: ";
            cin >> jugador;
        }

        computadora = j_computadora();
        cout << "La computadora escogio: " << computadora << endl << endl;

        if (jugador == computadora) {
            cout << "Nadie gana esta ronda" << endl;
        } else if (jugador == "piedra" && computadora == "tijera") {
            cout << "El jugador gana esta ronda" << endl;
            p_jugador++;
        } else if (jugador == "papel" && computadora == "piedra") {
            cout << "El jugador gana esta ronda" << endl;
            p_jugador++;
        } else if (jugador == "tijera" && computadora == "papel") {
            cout << "El jugador gana esta ronda" << endl;
            p_jugador++;
        } else {
            cout << "La computadora gana esta ronda" << endl << endl;
            puntos_computadora++;
        }
        cout << "Jugador: " << p_jugador << " - Computadora: " << puntos_computadora << endl << endl;

    } while (p_jugador < 3 && puntos_computadora < 3);

    if (p_jugador == 3) {
        cout << "El ganador es el jugador";
    } else {
        cout << "El ganador es la computadora";
    }

	cout<<">>>>>>El programa ha finalizado correctamente<<<<<<";

    return 0;
}

