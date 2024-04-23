#include <iostream>

using namespace std;

int main() {

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if(n1>n2 && n1>n3){
        cout << "La mayor es " << n1 << endl;
    }

    if(n2>n1 && n2>n3){
        cout << "La mayor es " << n2 << endl;
    }

    if(n3>n1 && n3>n2){
        cout << "La mayor es " << n3 << endl;
    }
}