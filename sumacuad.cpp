#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < n; o++)
        {
            cin >> matriz[i][o];
        }
        
    }

    int sum=0;
    for (int q = 0; q < n; q++)
    {
        for (int w = 0; w < n; w++)
        {
            sum+=matriz[q][w];
        }
        cout << sum << endl;
        sum=0;
        
    }
    
    
    for (int e = 0; e < n; e++)
    {
        for (int r = 0; r < n; r++)
        {
            sum+=matriz[r][e];
        }
        cout << sum << endl;
        sum=0;
    }
    
    for (int t = 0; t < n; t++)
    {
        for (int y = 0; y < n; y++)
        {
            sum+=matriz[t][y];
        }
        
    }
    cout << sum << endl;
    
}