#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
        if(datos[i]%4==0 && datos[i]%100!=0 || datos[i]%400==0)
        {
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }
    }
    
}