#include <iostream>
#include <string>

using namespace std;

int main() {

    char n;
    cin >> n;
    string cadena;
    cin.ignore();
    getline(cin, cadena);
    int cc=0;

    for (int i = 0; i < cadena.length(); i++)
    {
        if(cadena[i]==n)
        {
            cc++;
        }
    }
    
    cout << cc << endl;

    return 0;

}