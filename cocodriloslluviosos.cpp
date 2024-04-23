#include <iostream>

using namespace std;

int main() {

    int n,m;
    cin >> n >> m;
    int dias[n];

    for (int i = 0; i < n; i++)
    {
        cin >> dias[i];
    }

    string op;
    int i,v;

    for (int o = 0; o < m; o++)
    {
        
        cin >> op >> i >> v;

            if(op=="A")
        {
            dias[i-2]=v;
        }else{

            int min=dias[0];
            int max=dias[0];
            for (int p = i-1; p < v; p++)
            {
                if(dias[p]<=min)
                {
                    min=dias[p];
                }

                if(dias[p]>=max)
                {
                    max=dias[p];
                }
            }

            cout << min << " " << max << endl;
        }
    }

    
    
    return 0;

}