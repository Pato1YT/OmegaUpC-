#include <iostream>

using namespace std;

int main() {
    
    int m;
    int d;
    cin >> m;
    cin >> d;

    if(m>12 || d>31){
        cout << "Fecha incorrecta" << endl;
    }else{
        if(m>=3 && m<=6)
        {
            if(m==3){
                if(d>=21)
                {
                    cout << "Primavera" << endl;
                }
            }

            if(m==6){
                if(d<=20)
                {
                    cout << "Primavera" << endl;
                }
            }

            if(m>3 && m<6){
                cout << "Primavera" << endl;
            }
        }

        if(m>=6 && m<=9)
        {
            if(m==6){
                if(d>=21)
                {
                    cout << "Verano" << endl;
                }
            }

            if(m==9){
                if(d<=20)
                {
                    cout << "Verano" << endl;
                }
            }

            if(m>6 && m<9){
                cout << "Verano" << endl;
            }
        }

        if(m>=9 && m<=12)
        {
            if(m==9){
                if(d>=21)
                {
                    cout << "Otoño" << endl;
                }
            }

            if(m==12){
                if(d<=20)
                {
                    cout << "Otoño" << endl;
                }
            }

            if(m>9 && m<12){
                cout << "Otoño" << endl;
            }
        }

        if(m>=12 || m<=3)
        {
            if(m==12){
                if(d>=21)
                {
                    cout << "Invierno" << endl;
                }
            }

            if(m==3){
                if(d<=20)
                {
                    cout << "Invierno" << endl;
                }
            }

            if(m>12 || m<3){
                cout << "Invierno" << endl;
            }
        }
        }

}