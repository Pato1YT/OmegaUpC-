#include <iostream>

using namespace std;

int main() {

    int m;
    int n;

    cin >> m;
    cin >> n;

    int datos[n];
    int cont=0;

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
        if(datos[i]>m){
            cont++;
        }
    }

    m=datos[n-1]-m;
    cout << m << endl;
    cout << cont << endl;
    
}