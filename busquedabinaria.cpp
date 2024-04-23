#include <iostream>

using namespace std;

bool busquedaBinaria(int datos[], int tamano, int buscado) {
    int izquierda = 0;
    int derecha = tamano - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (datos[medio] == buscado) {
            return true;
        }


        if (datos[medio] < buscado) {
            izquierda = medio + 1;
        }

        else {
            derecha = medio - 1;
        }
    }

    return false;
}

/*bool busquedaSecuencial(int datos[], int tamano, int buscado) {

    for (int q = 0; q < tamano; q++)
    {
        if(buscado==datos[q])
        {
            return true;
        }
    }
    
    return false;
}*/

int main() {

    int n;
    cin >> n;
    int datos[n];

    for(int i = 0; i < n; i++)
    {
        cin >> datos[i];
    }

    int m;
    cin >> m;
    int numeros[m];

    for(int o = 0; o < m; o++)
    {
        cin >> numeros[o];
    }

    int resultado;
    for(int p = 0; p < m; p++)
    {
        resultado=busquedaBinaria(datos, n, numeros[p]);
        //resultado=busquedaSecuencial(datos, n, numeros[p]);
        if(resultado)
        {
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    
}