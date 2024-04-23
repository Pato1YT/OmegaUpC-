#include <iostream>

using namespace std;

int main() {

    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1>n2 && n1>n3){
        cout << "JOVENES" << endl;
    }

    if(n2>n1 && n2>n3){
        cout << "ADULTOS" << endl;
    }

    if(n3>n1 && n3>n2){
        cout << "TERCERA EDAD" << endl;
    }
}