#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    if(n>=30)
    {
        cout << "Usa playera sin mangas y short" << endl;
    }

    if(n<30 && n>15)
    {
        cout << "Usa playera y jeans" << endl;
    }
    
    if(n<0)
    {
        cout << "Usa gabardina y calentadores" << endl;
    }

    if(n>=0 && n<=15) 
    {
        cout << "Usa sweater y pantalón" << endl;
    }

}