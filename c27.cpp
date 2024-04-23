#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    if(n>=0 && n<=10)
    {
        cout << "Dirigirse a la Sala 1" << endl;
    }

    if(n>=11 && n<=15)
    {
        cout << "Dirigirse a la Sala 2" << endl;
    }

    if(n>=16)
    {
        cout << "Dirigirse a la Sala 3" << endl;
    }
}