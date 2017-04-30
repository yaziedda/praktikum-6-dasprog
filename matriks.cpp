#include <iostream>

using namespace std;

int main()
{
    int matriks1[2][3];
    int matriks2[3][3];
    int hasil[2][3];
    int perkalian(int hasil, int matriks1, int matriks2);


    for(int i=0; i < 2; i++){
            for(int j=0; j < 3; j++){
                cout << "Isi MATRIKS 1 [" << i+1 << "][" << j+1 << "] : "; cin >> matriks1[i][j];
            }
    }

    cout << "\n";

    for(int i=0; i < 3; i++){
            for(int j=0; j < 3; j++){
                cout << "Isi MATRIKS 2 [" << i+1 << "][" << j+1 << "] : "; cin >> matriks2[i][j];
            }
    }

    cout << "\n";

    for(int i=0; i < 2; i++){
            cout << "Matriks 1 baris ke " << i+1 << " : ";
            for(int j=0; j < 3; j++){
                cout << matriks1[i][j] << " ";
            }
            cout << "\n";
    }

    cout << "\n";

    for(int i=0; i < 3; i++){
            cout << "Matriks 2 baris ke " << i+1 << " : ";
            for(int j=0; j < 3; j++){
                cout << matriks2[i][j] << " ";
            }
            cout << "\n";
    }

    for(int i=0; i < 2; i++){
            for(int j=0; j < 3; j++){
                hasil[i][j]  = 0;
                for(int k=0; k<3; k++){
                        // proses perkalian
                    hasil[i][j] = perkalian(hasil[i][j],matriks1[i][k],matriks2[k][j]);
                }
            }
            cout << "\n";
    }


    cout << "Hasil Matriks :\n";
    for(int i=0; i < 2; i++){
            for(int j=0; j < 3; j++){
                cout << hasil[i][j] << " ";
            }
            cout << "\n";
    }

    return 0;
}

int perkalian (int hasil, int matriks1, int matriks2){
    return hasil+(matriks1*matriks2);
}

