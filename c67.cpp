#include <iostream>

using namespace std;

int main() {

    int cal;
    int contador=0;

    for (int i = 0; i < 6; i++)
    {
        cin >> cal;
        contador+=cal;
    }
    
    contador = contador/6;
    cout << "Promedio: " << contador << endl;

}