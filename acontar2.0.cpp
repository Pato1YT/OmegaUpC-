#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string cadena;
    cin >> cadena;

    vector<char> numeros = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    int contador=0;

    for (int i = 0; i < cadena.length(); i++)
    {
        for (int o = 0; o < numeros.size(); o++)
        {
            if(cadena[i]==numeros[o]){
                //to_string(cadena[o]);
                cout << cadena[o] << endl;
                contador+=stoi(to_string(cadena[o]));
            }
                cout << "a" << endl;
        }

    }

    cout << contador << endl;

}