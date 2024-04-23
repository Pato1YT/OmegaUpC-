#include <iostream>

using namespace std;

int main() {

    int n;
    int m;
    int res;
    string opcion;

    do
    {
        cin >> n >> m;
        res = (n+m)/2;

        cout << "Tu promedio es " << res << endl;
        cout << "¿Deseas continuar?" << endl;
        cin >> opcion;  
    } while (opcion=="s");

    cout << "Gracias por usar el sistema!" << endl;
    
}