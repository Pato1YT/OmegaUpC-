#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int m1[n][n];
    int m2[n][n];
    int m3[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < n; o++)
        {
            cin >> m1[i][o];
        }
        
    }

    for (int u = 0; u < n; u++)
    {
        for (int p = 0; p < n; p++)
        {
            cin >> m2[u][p];
        }
        
    }

    for (int q = 0; q < n; q++)
    {
        for (int w = 0; w < n; w++)
        {
            m3[q][w]=m1[q][w]+m2[q][w];
        }
        
    }

    for (int e = 0; e < n; e++)
    {
        for (int r = 0; r < n; r++)
        {
            cout << m3[e][r] << " ";
        }
        cout << endl;
        
    }
    
}