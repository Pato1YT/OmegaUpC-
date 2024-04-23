#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n;
    int datos[n];
    int c1=0;
    int c2=0;

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
        if(datos[i]==0)
        {
            c1++;
        }else{
            c2++;
        }
    }

    cin >> m;
    int datos2[m];
    for (int o = 0; o < m; o++)
    {
        cin >> datos2[o];
        if(datos[o]==0)
        {
            c1++;
        }else{
            c2++;
        }
    }

    cout << c1 << endl;
    cout << c2 << endl;

    return 0;
    
}