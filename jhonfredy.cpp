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
    

    int max=datos[0];
    for (int o = 0; o < n; o++)
    {
        if(datos[o]>max)
        {
            max=datos[o];
        }
    }

    int max2=0;
    for (int p = 0; p < n; p++)
    {
        if(datos[p]>max2 && datos[p]<max)
        {
            max2=datos[p];
        }
    }


    int res = max*max2;
    cout << res << endl;
      
}