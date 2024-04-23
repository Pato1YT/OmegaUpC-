#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n];

    for (int o = 0; o < n; o++)
    {
        cin >> datos[o];
    }
    
    for (int i = n-1; i > -1; i--)
    {
        cout << datos[i] * datos[i] << endl;
    }

    return 0;
    
}