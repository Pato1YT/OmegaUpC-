#include <iostream>
#include <string>

using namespace std;

int main() {

    string cadena;
    getline(cin, cadena);
    string resultado = "";

    for (int i = 0; i < cadena.length() - 1; ++i) {
        resultado += " ";
    }

    resultado += cadena.back();
    cout << resultado << endl;
    
    for (int o = cadena.length()-2; o > -1; o--)
    {
        resultado[o]=cadena[o];
        cout << resultado << endl;
    }

    return 0;
}
