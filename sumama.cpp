#include <iostream>

using namespace std;

int main() {
int n;
int m;

cin >> n;
cin >> m;

int m1[n][m];
int m2[n][m];

for (int i = 0; i < n; i++)
{
    for (int o = 0; o < m; o++)
    {
        cin >> m1[i][o];
    }
    
}

for (int q = 0; q < n; q++)
{
    for (int w = 0; w < m; w++)
    {
        cin >> m1[q][w];
    }
    
}

for (int e = 0; e < n; e++)
{
    for (int r = 0; r < m; r++)
    {
        int s=0;
        s+=m1[e][r]+m2[e][r];
        cout << s;

    }
    cout << endl;
    
}


}