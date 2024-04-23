#include <iostream>

using namespace std;

int main(){

    string pass="99";
    string contrasena;

    do
    {
        cin >> contrasena;
    } while (contrasena!=pass);

    cout << "Entraste, felicidades" << endl;
    
}