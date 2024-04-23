#include <iostream>

using namespace std;

int main() {

    int n=3;
    int m=6;

    int datos1[n];
    int datos2[n];

    int final[m];

    for (int i = 0; i < n; i++)
    {
        cin >> datos1[i];
    }

    for (int o = 0; o < n; o++)
    {
        cin >> datos2[o];
    }
    
    int ind=0;
    for (int p = 0; p < m; p++)
    {
        if(p<3){
            final[p]=datos1[p];
        }else{
            final[p]=datos2[ind];
            ind++;
        }
    }

    for (int  q=0; q < m; q++)
    {
        cout << final[q] << endl;
    }
    
    
    
}