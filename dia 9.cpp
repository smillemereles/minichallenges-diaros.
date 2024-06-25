#include <iostream>
#include <algorithm> // Necesario para std::sort
#include <vector>    // Usaremos un vector para almacenar el array de enteros

int main() {
    // Definimos un array de enteros
    std::vector<int> arr = {5, 2, 9, 1, 7};

    // Mostramos el array antes de ordenarlo
    std::cout << "Array antes de ordenar:\n";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Ordenamos el array utilizando std::sort
    std::sort(arr.begin(), arr.end());

    // Mostramos el array después de ordenarlo
    std::cout << "Array después de ordenar:\n";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
