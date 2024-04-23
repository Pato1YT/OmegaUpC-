#include <iostream>
#include <vector>

using namespace std;

bool cubomagico(vector<vector<int>>& matriz) {
    int n = matriz.size();
    int sumatoria = n * (n * n + 1) / 2;

    for (int i = 0; i < n; ++i) {
        int suma_fila = 0;
        int suma_columna = 0;

        for (int j = 0; j < n; ++j) {
            suma_fila += matriz[i][j];
            suma_columna += matriz[j][i];
        }

        if (suma_fila != sumatoria || suma_columna != sumatoria) {
            return false;
        }
    }

    int suma_diagonal1 = 0;
    int suma_diagonal2 = 0;

    for (int i = 0; i < n; ++i) {
        suma_diagonal1 += matriz[i][i];
        suma_diagonal2 += matriz[i][n - i - 1];
    }

    if (suma_diagonal1 != sumatoria || suma_diagonal2 != sumatoria) {
        return false;
    }

    return true;
}

vector<vector<int>> matrizcuadrada(int n) {
    vector<vector<int>> matriz(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }
    return matriz;
}

int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;

    vector<vector<int>> matrizfinal = matrizcuadrada(n);

    if (cubomagico(matrizfinal)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

}
