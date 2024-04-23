#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int d1[n];
    int d2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> d1[i];
    }

    for (int e = 0; e < n; e++)
    {
        cin >> d2[e];
    }
    

    int d3[n*2];
    int d4[n*2];

    bool act=true;
    int ind=0;
    /*
    for (int o = 0; o < n; o++)
    {
        if(act)
        {   
            d3[o]=d1[ind];
            d4[o]=d2[ind];
            act=false;
            ind++;
        }else{

            act=true;
            d3[o]=d2[ind];
            d4[o]=d1[ind];
            ind++;
        }
    }
    */

   /*
   for (int o = 0; o < n; o+=2)
   {
            d3[o]=d1[ind];
            d3[o+1]=d2[ind];

            d4[o]=d2[ind];
            d4[o+1]=d1[ind];
            ind++;
   }
   */

  for (int o = 0; o < n*2; o++)
  {
        if(act)
        {
            d3[o]=d1[ind];
            d4[o]=d2[ind];
            ind++;
            act=false;
        }else{
            d4[o]=d2[ind];
            d3[o]=d1[ind];
            ind++;
            act=true;
        }
  }
  
   

    for (int q = 0; q < 8; q++)
    {
        cout << d3[q] << " ";
    }
    cout << endl;

    for (int w = 0; w < 8; w++)
    {
        cout << d4[w] << " ";
    }

    return 0;

}