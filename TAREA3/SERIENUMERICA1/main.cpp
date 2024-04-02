#include <iostream>

using namespace std;

int main() {
    int serie[] = {1, 5, 3, 7, 5, 9, 7};
    int suma = 0;

    cout << "Serie: ";
    for(int i = 0; i < sizeof(serie) / sizeof(serie[0]); ++i) {
        std::cout << serie[i] << " ";
        suma += serie[i];
    }

    cout << "\nSuma de todos los elementos: " << suma << std::endl;
    return 0;
}
