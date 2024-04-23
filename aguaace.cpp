#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
    }

    for (int o = 0; o < n; o++)
    {
        if(datos[o]%2==0 && datos[o]!=1)
        {
            cout << datos[o] << " ";
        }
    }

    for (int p = 0; p < n; p++)
    {
        if(datos[p]%2!=0 || datos[p]==1)
        {
            cout << datos[p] << " ";
        }
    }

}