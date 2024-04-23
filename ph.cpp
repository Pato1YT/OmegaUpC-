#include <iostream>

using namespace std;

int main() {

    int p;
    cin >> p;

    if(p>=0 && p<=6) {
        cout << "Acido" << endl;
    }

    if(p==7){
        cout << "Neutro" << endl;
    }

    if(p>=8 && p<=14) {
        cout << "Base" << endl;
    }

    if(p>=15){
        cout << "Are you kidding me?" << endl;
    }
}