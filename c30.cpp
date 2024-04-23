#include <iostream>

using namespace std;

int main() {

    float estatura, peso, edad;
    cin >> estatura >> peso >> edad;

    if(estatura<=1.50 && (peso>=40 && peso<=60) && edad>=18)
    {
        cout << "Bienvenido al circo de los enanitos" << endl;

    }else{
        cout << "No eres aceptado" << endl;
    }
}