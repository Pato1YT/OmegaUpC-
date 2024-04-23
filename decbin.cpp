#include <iostream>
#include <bitset>

using namespace std;

int main() {

    int n;
    cin >> n;

    if(n<=0)
    {
        cout << "Error" << endl;
        return 0;
    }else{

        bitset<32> res(n);

        int msbIndex = 31;
        while (msbIndex >= 0 && res[msbIndex] == 0) {
            msbIndex--;
        }

        for (int i = msbIndex; i >= 0; i--) {
            std::cout << res[i];
        }
    }
    return 0;

}