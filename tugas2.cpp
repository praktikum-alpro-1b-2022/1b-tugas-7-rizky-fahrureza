#include <iostream>
using namespace std;

void inputMatrix(int matrix1[][25],
                 int matrix2[][25],
                 int baris1,
                 int kolom1,
                 int baris2,
                 int kolom2){

	cout << endl << "Matrix pertama" << endl;
	for(int i = 0; i < baris1; ++i){
		for(int j = 0; j < kolom1; ++j){
			cout << "   masukkan element ke ["<< i + 1 <<"]["<<j + 1 <<"]" << ": ";
			cin >> matrix1[i][j];
		}
	}

	cout << endl << "Matrix kedua" << endl;
	for(int i = 0; i < baris2; ++i){
		for(int j = 0; j < kolom2; ++j){
			cout << "   masukkan element ke ["<< i + 1 <<"]["<<j + 1 <<"]" << ": ";
			cin >> matrix2[i][j];
		}
	}
}

void productOfMatrix(int matrix1[][25],
                     int matrix2[][25],
                     int hasil[][25],
                     int baris1,
                     int kolom1,
                     int baris2,
                     int kolom2){

	for(int i = 0; i < baris1; ++i){
		for(int j = 0; j < kolom1; ++j){
			hasil[i][j] = 0;
		}
	}

    for(int i = 0; i < baris1; ++i){
		for(int j = 0; j < kolom2; ++j){
			for(int k=0; k < kolom1; ++k){
				hasil[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}

void Hasil(int hasil[][25],
           int baris1,
           int kolom2){

	cout << "\nHasil dari perkalian matrix adalah:" << endl;
	for(int i = 0; i < baris1; ++i){
		for(int j = 0; j < kolom2; ++j){
			cout << hasil[i][j] << " ";
			if(j == kolom2 - 1){
				cout << endl << endl;
            }
		}
	}
}

int main(){
	int matrix1[25][25],
        matrix2[25][25],
        hasil[25][25],
        baris1,
        kolom1,
        baris2,
        kolom2;

	cout << "Masukkan baris matrix pertama: ";
	cin >> baris1;
    cout << "Masukkan kolom matrix pertama: ";
	cin >> kolom1;

	cout << "Masukkan baris matrix kedua: ";
	cin >> baris2;
    cout << "Masukkan kolom matrix kedua: ";
	cin >> kolom2;

	while (kolom1 != baris2){
		cout << "\nJumlah kolom matrix tidak sama dengan baris pada matrix kedua" << endl;

		cout << "Masukkan baris matrix pertama: ";
        cin >> baris1;
        cout << "Masukkan kolom matrix pertama: ";
        cin >> kolom1;

        cout << "Masukkan baris matrix kedua: ";
        cin >> baris2;
        cout << "Masukkan kolom matrix kedua: ";
        cin >> kolom2;
	}

        inputMatrix(matrix1,
                    matrix2,
                    baris1,
                    kolom1,
                    baris2,
                    kolom2);

        productOfMatrix(matrix1,
                    matrix2,
                    hasil,
                    baris1,
                    kolom1,
                    baris2,
                    kolom2);

        Hasil(hasil,
              baris1,
              kolom2);

	return 0;
}
