#include <iostream>
#include <bitset>
#include <sstream>

using namespace std;

int main() {

    string cadena="";
    string nBin;
    getline(cin, nBin);

    istringstream iss(nBin);
    string subNBin;

    while (iss >> subNBin)
    {
        int nDec = bitset<8>(subNBin).to_ulong();

        char nAscii = static_cast<char>(nDec);

        int vAscii = static_cast<int>(nAscii);

        char caracter = static_cast<char>(vAscii);
    
        cadena+=caracter;
    }

    cout << cadena << endl;
}