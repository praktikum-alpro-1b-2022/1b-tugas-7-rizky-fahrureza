#include <iostream>

using namespace std;

void sumMatrix(int m, int n){
    int matrix1[25][25], matrix2[25][25], hasil[25][25];

    cout << "Masukkan matrix pertama: \n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix1[i][j];
            }
        }

    cout << "Masukkan matrix kedua: \n";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> matrix2[i][j];
            }
        }

    cout << "hasil penjumlahan dari matrix pertama dan kedua: \n";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                hasil[i][j] = matrix1[i][j] + matrix2[i][j];
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
}
int main() {
  int a, b;
  cout << "Masukkan jumlah baris matrix: ";
  cin >> a;
  cout << "Masukkan jumlah kolom matrix: ";
  cin >> b;

  sumMatrix(a, b);

  return 0;
}
