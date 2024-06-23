#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Pedir al usuario que ingrese el primer número
    cout << "Ingrese el primer número: ";
    cin >> num1;

    // Pedir al usuario que ingrese el segundo número
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Calcular la suma
    int suma = num1 + num2;

    // Mostrar el resultado
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;

    return 0;
}
