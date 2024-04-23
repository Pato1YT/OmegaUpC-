#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n;
    cin >> m;

    int res = n/m;
    int res2 = n%m;
    
    cout << "Equipos formados: " << res << endl;
    cout << "Estudiantes sin equipo: " << res2 << endl; 
}