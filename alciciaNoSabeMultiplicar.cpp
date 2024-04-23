#include <iostream>
#include <cctype>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    string cadena="";

    for (int i = 0; i < m-1; i++)
    {
        cadena+=to_string(n);
        cadena+="+";
    }
    
    cadena+=to_string(n);
    cadena+="=";

    for(int o = 0; o < n-1; o++)
    {
        cadena+=to_string(m);
        cadena+="+";
    }

    cadena+=to_string(m);
    
    cout << cadena << endl;
    return 0;
}