#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int lista[n][3];
    

    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int o = 0; o < 3; o++)
        {
            cin >> lista[i][o];
            sum+=lista[i][o];
        }
        cout << sum << endl;
        
    }
    
}