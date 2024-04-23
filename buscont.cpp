#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
     
    int datos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
    }

    int bus;
    cin >> bus;
    int con=0;

    for (int o = 0; o < n; o++)
    {
        if(datos[o]==bus){
            con++;
        }
    }

    cout << con << endl;
    
    
}