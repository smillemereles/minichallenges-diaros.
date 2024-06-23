#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Función para generar una contraseña segura
string generarContrasenaSegura() {
    // Conjuntos de caracteres permitidos
    string letrasMayusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string letrasMinusculas = "abcdefghijklmnopqrstuvwxyz";
    string numeros = "0123456789";
    string simbolos = "!@#$%^&*()_+-=[]{}|;:,.<>?";

    // Combinamos todos los caracteres en un solo string
    string caracteresPermitidos = letrasMayusculas + letrasMinusculas + numeros + simbolos;

    // Longitud de la contraseña aleatoria entre 8 y 16 caracteres
    int longitud = rand() % 9 + 8; // Genera un número entre 8 y 16

    // Generar la contraseña aleatoria
    string contrasena;
    for (int i = 0; i < longitud; ++i) {
        // Seleccionar un caracter aleatorio del conjunto de caracteres permitidos
        int index = rand() % caracteresPermitidos.length();
        contrasena += caracteresPermitidos[index];
    }

    return contrasena;
}

int main() {
    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Generar la contraseña segura
    string contrasena = generarContrasenaSegura();

    // Mostrar la contraseña generada
    cout << "Contraseña generada: " << contrasena << endl;

    return 0;
}
