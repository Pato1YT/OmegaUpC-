#include <iostream>

using namespace std;

int main() { 
    
    int d, m;
    cin >> d >> m;

    string dias[] = {"Sun", "Mon", "Tue", "Wed", "Thr", "Fri", "Sat"};
    int calen[5][7];

    int con=1;
    bool act=true;
    for (int i = 0; i < 5; i++)
    {

        if(!act)
        {
            if(con==m)
            {
                break;
            }else{            
                for (int p = 0; p < 7; p++)
                {
                    calen[i][p]=con;
                    con++;
                }
            }
        }else{

            for (int o = d-1; o < 7; i++)
            {
                calen[i][o]=con;
                con++;
                act=false;
            }
        }        
    }

    for (string d : dias)
    {
        cout << d << " ";
    }
    cout << endl;

    
    

    return 0;

}