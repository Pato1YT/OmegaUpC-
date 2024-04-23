#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int datos[n];
    int datos2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> datos[i];
    }

    for (int o = 0; o < n; o++)
    {
        cin >> datos2[o];
    }

    int ind1=0;
    int ind2=0;
    int res1[n*2];
    int res2[n*2];
    bool act=true;

    while(ind1!=n && ind2!=n)
    {
        if(act)
        {
            res1[ind1]=datos[ind1];
            ind1++;
            act=false;
        }else{
            res1[ind2]=datos2[ind2];
            ind2++;
            act=true;
        }
    }


    for (int q = 0; q < 8; q++)
    {
        cout << res1[q] << " ";
    }
    cout << endl;
    


    return 0;
    
}