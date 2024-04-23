#include <iostream>

using namespace std;

int main() {

    float ca;
    cin >> ca;

    int n;
    cin >> n;
    float cal[n];
    int prom=0;

    for (int i = 0; i < n; i++)
    {
        cin >> cal[i];
        prom+=cal[i];
    }

    prom+=prom/n;

    if(prom>ca)
    {
        cout << "Presume" << endl;
    }

    if(prom<ca)
    {
        cout << "Ladra" << endl;
    }

    
}