#include <iostream>
#include <string>
#include <cctype>

// Función para verificar si una cadena es un palíndromo
bool es_palindromo(const std::string& cadena) {
    int izquierda = 0;
    int derecha = cadena.length() - 1;

    // Recorrer la cadena desde ambos extremos hacia el centro
    while (izquierda < derecha) {
        // Ignorar caracteres no alfanuméricos y convertir a minúsculas
        while (izquierda < derecha && !std::isalnum(cadena[izquierda])) {
            izquierda++;
        }
        while (izquierda < derecha && !std::isalnum(cadena[derecha])) {
            derecha--;
        }
        
        // Comparar caracteres ignorando mayúsculas y minúsculas
        if (std::tolower(cadena[izquierda]) != std::tolower(cadena[derecha])) {
            return false;
        }
        
        izquierda++;
        derecha--;
    }

    return true;
}

int main() {
    std::string cadena;

    // Solicitar al usuario que ingrese una cadena de caracteres
    std::cout << "Ingrese una cadena de caracteres: ";
    std::getline(std::cin, cadena);

    // Determinar si la cadena es un palíndromo
    if (es_palindromo(cadena)) {
        std::cout << "\"" << cadena << "\" es un palíndromo.\n";
    } else {
        std::cout << "\"" << cadena << "\" no es un palíndromo.\n";
    }

    return 0;
}
