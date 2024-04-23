#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> lista;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        if(e!=0){
            lista.push_back(e);
        }else{
            lista.clear();
        }

    }

    if(lista.empty()){
        cout << "VACIO" << endl;
    }else{
        for (auto &&o : lista)
        {
            cout << o << endl;            
        }
        
    }
    
}