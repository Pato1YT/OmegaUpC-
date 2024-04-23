#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n];

    int compar=0;
    int comimpar=0;
    float sum=0;

    for(int i=0; i < n; i++)
    {
        cin >> datos[i];

        if(datos[i]%2==0 && datos[i]!=1)
        {
            compar+=datos[i];
        }

        if(datos[i]%2!=0){
            comimpar+=datos[i];
        }

        sum+=datos[i];
    }

    sum=sum/n;

    cout << compar << endl;
    cout << comimpar << endl;
    cout << fixed << setprecision(1) << sum << endl;
}