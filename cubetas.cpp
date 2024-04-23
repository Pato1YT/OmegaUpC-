#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int num[m];
    for (int i = 0; i < m; i++)
    {
        num[i]=0;
    }

    int res;
    for (int o = 0; o < n; o++)
    {
        cin >> res;
        num[res-1]++;
    }

    for (int p = 0; p < m; p++)
    {
        cout << p+1 << ": " << num[p] << endl;
    }

    return 0;
    
}