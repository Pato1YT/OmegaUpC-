#include <iostream>

using namespace std;

int main() {

    int n;
    int m;
    int op;

    cin >> n;
    cin >> m;
    cin >> op;

    switch (op)
   {
    case 0:
        for (int i = n; i <= m; i++)
        {
            cout << i << endl;
        }
        
        break;

    case 1:
        for (int o = n; o <= m; o++)
        {   
            if(o%2==0){
                cout << o << endl;
            }
            
        }

        break;

    case 2:
        for (int p = n; p <= m; p++)
        {   
            if(p%2!=0){
                cout << p << endl;
            }
            
        }

        break;

    default:
        break;
    }
}