#include <iostream>

using namespace std;

int main() {

    int n=8;
    int datos[n];

    int sum=0;
    int con=0;

    for(int i=0; i < n; i++){

        cin >> datos[i];

        if(sum<=1000){
            sum+=datos[i];
            con++;
        }

        if(sum>1000){
            cout << con << endl;
            break;
        }
        
    }
}