#include <iostream>
using namespace std;

void Transpose(int baris, int kolom){
    int matrix[25][25], transpose[25][25];

    cout << "\nMasukkan matrix" << endl;
    for (int i = 0; i < baris; ++i) {
      for (int j = 0; j < kolom; ++j) {
         cout << "   masukkan element ke ["<< i + 1 <<"]["<<j + 1 <<"]" << ": ";
         cin >> matrix[i][j];
      }
   }

   cout << "\nMatrix: " << endl;
   for (int i = 0; i < baris; ++i) {
      for (int j = 0; j < kolom; ++j) {
         cout << " " << matrix[i][j];
         if (j == kolom - 1)
            cout << endl << endl;
      }
   }

    for (int i = 0; i < baris; ++i)
      for (int j = 0; j < kolom; ++j) {
         transpose[j][i] = matrix[i][j];
      }

    cout << "\nHasil transpose dari matrix: " << endl;
    for (int i = 0; i < kolom; ++i)
      for (int j = 0; j < baris; ++j) {
         cout << " " << transpose[i][j];
         if (j == baris - 1)
            cout << endl << endl;
      }
}

int main(){
   int baris, kolom;

   cout << "Masukkan baris matrix: ";
	cin >> baris;
    cout << "Masukkan kolom matrix: ";
	cin >> kolom;

   Transpose(baris, kolom);

   return 0;
}
