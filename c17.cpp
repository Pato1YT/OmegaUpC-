#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int residuo=n;
    int contador20=0;
    int contador10=0;
    int contador5=0;
    int contador1=0;

    if(residuo>=20){
        int res=residuo/20;
        residuo=residuo-(res*20);
        contador20=res;
    }

    if(residuo>=10){
        int res=residuo/10;
        residuo=residuo-(res*10);
        contador10=res;
    }

    if(residuo>=5){
        int res=residuo/5;
        residuo=residuo-(res*5);
        contador5=res;
    }

    if(residuo>=1){
        int res=residuo/1;
        residuo=residuo-(res*1);
        contador1=res;
    }

    cout << "Monedas de 20: " << contador20 << endl;
    cout << "Monedas de 10: " << contador10 << endl;
    cout << "Monedas de 5: " << contador5 << endl;
    cout << "Monedas de 1: " << contador1 << endl;
}