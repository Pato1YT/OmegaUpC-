#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n;
    cin >> m;

    int res = n/m;
    int res2 = n%m;
    
    cout << "División Entera: " << res << endl;
    cout << "Módulos: " << res2 << endl; 
}