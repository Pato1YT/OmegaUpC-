#include <iostream>

using namespace std;

int main() {

    float datos[7];
    float prom=0;

    for (int i = 0; i < 7; i++)
    {
        cin >> datos[i];
        prom+=datos[i];
    }

    prom=prom/7;

    float mascal=datos[0];
    float masfri=datos[0];

    for (int o = 0; o < 7; o++)
    {
        if(datos[o]>mascal){
            mascal=datos[o];
        }

        if(datos[o]<masfri){
            masfri=datos[o];
        }
    }

    int poscal=0;
    int posfri=0;

    for (int p = 0; p < 7; p++)
    {
        if(datos[p]==mascal){
            poscal=p+1;
            break;
        }
    }

    for (int q = 0; q < 7; q++)
    {
        if(datos[q]==masfri){
            posfri=q+1;
            break;
        }
    }
    
    cout << "Promedio: " << prom << endl;
    cout << "Más cálido: " << poscal << endl;
    cout << "Más friolento: " << posfri << endl;
    
}