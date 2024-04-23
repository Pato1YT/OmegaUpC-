#include <iostream>
#include <string>

using namespace std;

int main() {

    string llave;
    string cerradura;

    cin >> cerradura;
    cin >> llave;

    for (int i = 0; i < cerradura.length(); i++)
    {
        if(cerradura[i]==llave[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }


    cout << "SI" << endl;

    return 0;
}