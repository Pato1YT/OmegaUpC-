#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
    }

    n=n-1;

    for (int o = n; o >= 0; o--)
    {
        cout << datos[o] << endl;
    }
  
}