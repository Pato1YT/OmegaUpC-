#include <iostream>

using namespace std;

int main() {

    int n, m, r;
    cin >> n >> m >> r;

    if(n*m==r)
    {
        cout << "*" << endl;
        return 0;
    }

    if(n/m==r)
    {
        cout << "/" << endl;
        return 0;
    }

    if(n+m==r)
    {
        cout << "+" << endl;
        return 0;
    }

    if(n-m==r)
    {
        cout << "-" << endl;
        return 0;
    }

    cout << "D:" << endl;


}