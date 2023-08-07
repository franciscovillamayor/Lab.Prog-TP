
#include <iostream>
#include <string>
using namespace std;
string ProcesaPalabra(string palabra);
int main() {
    string palabra;
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    string resultado = ProcesaPalabra(palabra);
    cout << "Palabra procesada: " << resultado << endl;

    return 0;
}
string ProcesaPalabra(string palabra) {
    for (int i = 0; i < palabra.length(); i++) {
        if (palabra[i] == 'a') {
            palabra[i] = 'b';
        }
    }
    return palabra;
}
    