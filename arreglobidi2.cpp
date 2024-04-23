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
            matriz[i][o]=i*o;
        }
        
    }
    

    for (int q = 0; q < n; q++)
    {
        for (int w = 0; w < n; w++)
        {
            cout << matriz[q][w];
        }
        cout << endl;
    }
    
    return 0;
    
}