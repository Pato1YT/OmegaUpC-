#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < n; o++)
        {
            cin >> datos[i][o];
        }
    }

    int d=1;
    bool act=true;
    for (int p = 0; p < n; p++)
    {
        for (int q = 0; q < n; q++)
        {
            if(datos[p][q]==d && datos[q][p]==d)
            {
                act=true;
            }else{
                act=false;
            }
        }
    }
    
    
}