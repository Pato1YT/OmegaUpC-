#include <iostream>
#include <algorithm>

using namespace std;
/*
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void ordenarBurbuja(int arreglo[], int longitud) {
    for (int i = 0; i < longitud - 1; ++i) {
        for (int j = 0; j < longitud - i - 1; ++j) {
            if (arreglo[j] > arreglo[j + 1]) {
                intercambiar(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}
*/

int busquedaBinaria(int arreglo[], int inicio, int fin, int objetivo) {
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        if (arreglo[medio] == objetivo) {
            return medio;
        }

        if (arreglo[medio] < objetivo) {
            inicio = medio + 1;
        }
        else {
            fin = medio - 1;
        }
    }

    return -1;
}


int main() {

    int n;
    cin >> n;
    int datos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
    }
    int ob = datos[0];
    
    sort(datos, datos+n);

    //ordenarBurbuja(datos, n);

    int res = busquedaBinaria(datos, 0, n-1, ob);

    cout << res << endl;
    
    return 0;
}