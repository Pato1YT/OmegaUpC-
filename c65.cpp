#include <iostream>

using namespace std;

int main() {

    string datos[5];
    string mensaje="Tus números fueron ";

    for (int i = 0; i < 5; i++)
    {
        cin >> datos[i];
    }

    for (int o = 4; o > -1; o--)
    {
        mensaje+=datos[o];
        if(o>0)
        {
            mensaje+=",";
        }
    }
    

    cout << mensaje << endl;

}