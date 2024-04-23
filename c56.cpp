#include <iostream>

using namespace std;

int main() {

    string n;
    string mensaje="Tus números fueron ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        mensaje+=n;
        if(i<4)
        {
            mensaje+=",";
        }
    }

    cout << mensaje << endl;
    
}