#include <iostream>

using namespace std;

int main() {

    int n;
    int k;
    cin >> n >> k;
    int datos[n];
    int cc=0;

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
        if(datos[i]==k)
        {
            cc++;
        }
    }
    
    cout << cc << endl;
}