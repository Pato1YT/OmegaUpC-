#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignorar el salto de línea después de leer 'n'

    int i = 0;

    do {
        string cadena;
        getline(cin, cadena); // Lee la línea completa

        int lon = cadena.length();
        cout << "\"" << cadena << "\"" << " tiene " << lon << " caracteres" << endl;

        i++;
    } while (i < n);

    return 0;
}
