#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    if(n>=9 && n<=11)
    {
        cout << "Junior" << endl;
    }

    if(n>=12 && n<=15)
    {
        cout << "Secundaria" << endl;
    }

    if(n>=16 && n<=18)
    {
        cout << "Preparatoria" << endl;
    }

    if(n>=19 && n<=23)
    {
        cout << "Universitaria" << endl;
    }

    if(n<=8 || n>=24)
    {
        cout << "No es posible tu participación" << endl;
    }
}