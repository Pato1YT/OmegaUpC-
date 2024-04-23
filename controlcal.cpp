#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n];
    int pos;
    bool ac=true;

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
        if(ac)
        {
            if(datos[i]==1)
            {
                pos=i;
                ac=false;
            }
        }
        
    }

    cout << pos << endl;

    return 0;
    
}