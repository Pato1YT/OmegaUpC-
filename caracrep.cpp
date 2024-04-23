#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string cadena;
    cin >> cadena;

    string minusculas="";
    string mayusculas="";

    char minus[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char mayus[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 0; i < cadena.length(); i++)
    {
        for (int o = 0; o < 26; o++)
        {
            if(cadena[i]==minus[o])
            {
                minusculas+=minus[o];
                break;
            }
        }
    }

    for (int p = 0; p < cadena.length(); p++)
    {
        for (int q = 0; q < 26; q++)
        {
            if(cadena[p]==mayus[q])
            {
                mayusculas+=mayus[q];
                break;
            }
        }
    }

    sort(minusculas.begin(), minusculas.end());
    sort(mayusculas.begin(), mayusculas.end());
    
    string resMinus(1, minusculas[0]);
    string resMayus(1, mayusculas[0]);

    for (int w = 1; w < minusculas.length(); w++)
    {
        if(minusculas[w]!=minusculas[w-1])
        {
            resMinus+=minusculas[w];
        }
    }

    for (int e = 1; e < mayusculas.length(); e++)
    {
        if(mayusculas[e]!=mayusculas[e-1])
        {
            resMayus+=mayusculas[e];
        }
    }

    cout << resMinus << endl;
    cout << resMayus << endl;
    
    return 0;

}