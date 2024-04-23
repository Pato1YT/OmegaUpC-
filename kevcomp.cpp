#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int l1[n];
    int l2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> l1[i];
        cin >> l2[i];

        if(l1[i]>l2[i]){
            cout << l1[i] << endl;
        }

        if(l2[i]>l1[i]){
            cout << l2[i] << endl;
        }

        if(l1[i]==l2[i]){
            cout << "NO ITZMAN" << endl;
        }
    }
    
}