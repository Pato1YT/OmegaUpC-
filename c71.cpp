#include <iostream>

using namespace std;

int main() {

    int datos[] = {24,16};

    int datos2[2];

    datos2[0]=datos[1];
    datos2[1]=datos[0];

    cout << datos2[0] << endl;
    cout << datos2[1] << endl;
}