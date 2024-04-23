#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int sum=0;
    for (int i = n; i <= m; i++)
    {
        if(i%2!=0 || i==1 || i==-1)
        {
            sum+=i;
        }
    }

    cout << sum << endl;

    return 0;
    
}