#include <iostream>

using namespace std;

int main() {

    int n=0;
    int sum=0;
    do
    {
        cin >> n;
        if(n>=10 & n<=100){
            sum+=n;
        }
    } while (n>=0);

    cout << sum << endl;
       
}