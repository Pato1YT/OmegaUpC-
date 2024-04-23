#include <iostream>

using namespace std;

int main() {

    int n1,n2,n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    int res = (n1+n2+n3)/3;

    if(res>=220){
        cout << "Felicidades, tu promedio fue: " << res << endl;
        cout << "Estas en la final!" << endl;
    }else{
        cout << "Lo sentimos, tu promedio fue: " << res << endl;
        cout << "No eres finalista" << endl;
    }
}