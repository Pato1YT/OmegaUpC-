#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int res = n/3;
    int res2 = n%3;
    
    cout << "Equipos formados: " << res << endl;
    cout << "Programadores sin equipo: " << res2 << endl; 
}