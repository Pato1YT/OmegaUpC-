#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombre;
    getline(cin, nombre);

    for (int i = 0; i < nombre.length(); i++)
    {
        //char nAscii = static_cast<char>(nombre[i]);
        int vAscii = static_cast<int>(nombre[i]);

        cout << nombre[i] << " ASCII value is " << vAscii << endl;

        if(i==3)
        {
            return 0;
        }
    }
    
    return 0;
}