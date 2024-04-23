#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n];
    int max=0;
    int ind=0;

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
        if(datos[i]>max){
            max=datos[i];
            ind=i;
        }
    }

    cout << ind+1 << " " << max << endl;
    
}