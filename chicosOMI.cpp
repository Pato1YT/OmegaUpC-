#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int datos[n];
    string nombres[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nombres[i];
        cin >> datos[i];
    }

    int maxi = datos[0];
    int mini = datos[0];
    int pos1;
    int pos2;

    for (int o = 0; o < n; o++)
    {
        if(datos[o]>maxi)
        {
            maxi=datos[o];
            pos1=o;
        }

        if(datos[o]<mini)
        {
            mini=datos[o];
            pos2=o;
        }
    }


    cout << nombres[pos1] << " " << nombres[pos2] << endl;

    return 0;
}