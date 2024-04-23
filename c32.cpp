#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if(n1>=60 && n2>=60 && n3>=60){
        cout << "Te prestamos el carro" << endl;
    }else{
        cout << "No te prestamos el carro, ponte a estudiar!" << endl;
    }
}