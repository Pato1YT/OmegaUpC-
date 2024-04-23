#include <iostream>

using namespace std;

int main() {

    long n;
    cin >> n;
    long datos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
    }
    
    long b;
    cin >> b;
    long cb=0;

    for (int p = 0; p < n; p++)
    {
        if(datos[p]==b){
            cb++;
        }
    }

    cout << cb << endl;
    
}