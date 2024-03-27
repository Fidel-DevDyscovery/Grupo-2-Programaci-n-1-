#include <iostream>

using namespace std;

int main() {
    int sumatoria = 0;

    for (int num = 2; num <= 100; num++) {
        bool primo = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            cout << num << " es primo" << endl;
            sumatoria += num;
        }
    }

    cout << "La sumatoria de los numeros primos es: " << sumatoria << endl;
    return 0;
}
