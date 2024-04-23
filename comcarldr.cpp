#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n;
    cin >> m;

    int com[n][m];
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int o = 0; o < m; o++)
        {
            cin >> com[i][o];
            sum+=com[i][o];
        }
        cout << sum << endl;

    }
    
}