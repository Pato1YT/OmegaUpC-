#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n;
    cin >> m;

    if(n>m)
    {
        cout << "mayor" << endl;
    }

    if(n<m)
    {
        cout << "menor" << endl;
    }

    if(n==m)
    {
        cout << "iguales" << endl;
    }
}