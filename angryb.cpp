#include <iostream>

using namespace std;

int main() {

    string c1="ooo";
    string c2="oo-";
    string c3="o--";

    int n;
    cin >> n;
    int resultado=0;

    for (int i = 0; i < n; i++)
    {
        string linea;
        cin >> linea;

        if(linea==c1)
        {
            resultado+=3;
        }

        if(linea==c2)
        {
            resultado+=2;
        }
        
        if(linea==c3)
        {
            resultado+=1;
        }


    }

    cout << resultado << endl;
    
}