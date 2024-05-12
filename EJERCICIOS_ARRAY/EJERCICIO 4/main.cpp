#include <iostream>
#include <vector>

using namespace std;

int numeroAlumnos() {
    int numalumnos;
    cout << "Introduce la cantidad de numero de alumnos a los que va a tomar su altura: ";
    cin >> numalumnos;
    return numalumnos;
}

void leerAlturas(vector<double>& alturas, int numalumnos) {
    cout << "Introduce las alturas de los alumnos:\n";
    double altura;
    for (int i=0; i<numalumnos; ++i) {
        cout<<"Altura del alumno "<<(i + 1)<<": ";
        cin>>altura;
        alturas.push_back(altura);
    }
}

double calcularMedia(const vector<double>& alturas) {
    double suma=0.0;
    for (double altura : alturas) {
        suma+=altura;
    }
    return suma/alturas.size();
}

void mostrarResultados(const vector<double>& alturas, double media) {
    cout<<"\nAlturas de los alumnos:\n";
    for (int i=0; i<alturas.size();++i) {
        cout << "Alumno " << (i + 1) << ": " << alturas[i] << endl;
    }

    int masaltos=0,masbajos=0;
    for (double altura : alturas) {
        if (altura >=media) {
            masaltos++;
        } else if (altura < media) {
            masbajos++;
        }
    }

    cout<<endl;
    cout << "La cantidad de alumnos mas alto que la media es de: " << masaltos << endl;
    cout << "La cantidad de alumnos mas bajo que la media es de: " << masbajos << endl;
}

int main() {
    vector<double> alturas;
    int numalumnos = numeroAlumnos();
    leerAlturas(alturas,numalumnos);
    double media = calcularMedia(alturas);
    mostrarResultados(alturas, media);
    return 0;
}
