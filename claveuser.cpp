#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string cadena;
    string res="";
    getline(cin, cadena);

    istringstream iss(cadena);
    string subCad;

    while(iss >> subCad)
    {
        res+=tolower(subCad[0]);
    }

    cout << res << endl;

    return 0;
}