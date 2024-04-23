#include <iostream>
#include <vector>

using namespace std;

int main() {

    int numPrimos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    do
    {
        int n;
        cin >> n;

        for (int i = 0; i < numPrimos.size(); i++)
        {
            if(n==numPrimos[i]){
                cout << "existe" << endl;
                break;
            }
        }
        
        
    } while (n!=0);
    
}