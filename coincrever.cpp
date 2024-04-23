#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    string cadena;
    cin >> cadena;
    string cadena2=cadena;

    reverse(cadena.begin(), cadena.end());

    int cc=0;

    for (int i = 0; i < cadena.length(); i++)
    {
        if(tolower(cadena[i]) == tolower(cadena2[i])){
            cc++;
        }
    }

    cout << cc << endl;
    
}