#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para obtener la jugada de la computadora
string obtenerJugadaComputadora() {
    int num = rand() % 3; // Genera un número aleatorio entre 0 y 2

    // Asigna piedra, papel o tijeras según el número generado
    if (num == 0) {
        return "piedra";
    } else if (num == 1) {
        return "papel";
    } else {
        return "tijeras";
    }
}

// Función para determinar quién gana
// Devuelve 1 si gana el usuario, 0 si hay empate, -1 si gana la computadora
int determinarGanador(string jugadaUsuario, string jugadaComputadora) {
    if (jugadaUsuario == jugadaComputadora) {
        return 0; // Empate
    } else if ((jugadaUsuario == "piedra" && jugadaComputadora == "tijeras") ||
               (jugadaUsuario == "papel" && jugadaComputadora == "piedra") ||
               (jugadaUsuario == "tijeras" && jugadaComputadora == "papel")) {
        return 1; // Usuario gana
    } else {
        return -1; // Computadora gana
    }
}

int main() {
    srand(time(0)); // Inicializa la semilla para la generación de números aleatorios

    cout << "Bienvenido al juego Piedra, Papel o Tijeras!" << endl;

    // Pedir al usuario que ingrese su jugada
    cout << "Ingrese su jugada (piedra, papel o tijeras): ";
    string jugadaUsuario;
    cin >> jugadaUsuario;

    // Validar la entrada del usuario
    while (jugadaUsuario != "piedra" && jugadaUsuario != "papel" && jugadaUsuario != "tijeras") {
        cout << "Jugada inválida. Ingrese piedra, papel o tijeras: ";
        cin >> jugadaUsuario;
    }

    // Obtener la jugada de la computadora
    string jugadaComputadora = obtenerJugadaComputadora();

    // Mostrar las jugadas
    cout << "Usted eligió: " << jugadaUsuario << endl;
    cout << "La computadora eligió: " << jugadaComputadora << endl;

    // Determinar el resultado
    int resultado = determinarGanador(jugadaUsuario, jugadaComputadora);
    if (resultado == 1) {
        cout << "¡Felicidades! Usted gana." << endl;
    } else if (resultado == -1) {
        cout << "¡La computadora gana!" << endl;
    } else {
        cout << "Es un empate." << endl;
    }

    return 0;
}

