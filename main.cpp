#include <stdio.h>
#include <iostream>

using namespace std;

struct nilaimhs {
        int nilai;
        char nama[10];
};

int main(){

      int i;
      void menucari(nilaimhs* dafnilai);
      void ratarata(nilaimhs* dafnilai, float *rata);
      int terbesar(nilaimhs* dafnilai);

      nilaimhs dafnilai[3];

      for (i = 0; i <= 2; i++) {
        printf("Input nama ke-%d : ", i + 1);
        scanf("%s", &dafnilai[i].nama);
        printf("Input nilai ke-%d : ", i + 1);
        scanf("%d", &dafnilai[i].nilai);
      }

        float rata;
        rata = 0;

        // sub program procedure untuk mencari nilai rata rata dan men-assign variable rata
        ratarata(dafnilai, &rata);

        // sub program function untuk mencari nilai terbesar
        int tbk = terbesar(dafnilai);

        printf("\n\n====================================\n");
        printf("No\t Nama\t\t Nilai \n");
        printf("====================================\n");
        printf("====================================\n");

        for (i=0;i<=2;i++){
            printf("%d\t %s\t %d \n",i+1,dafnilai[i].nama,
            dafnilai[i].nilai);
        }

        printf("\n====================================");
        printf("\nNilai rata-rata dalah : %.2f", rata/3);
        printf("\n====================================");
        printf("\nNilai terbesar dalah : %d", tbk);
        printf("\n====================================");

        menucari(dafnilai);
      return 0;

}

void ratarata(nilaimhs* dafnilai, float *rata){
    for (int i = 0; i <= 2; i++) {
        *rata = *rata + dafnilai[i].nilai;
    }
}

int terbesar(nilaimhs* dafnilai){
    int tbk = 0;
    for (int i = 0; i <= 2; i++) {
        if(dafnilai[i].nilai > tbk){
                tbk = dafnilai[i].nilai;
        }
    }
    return tbk;
}

void menucari(nilaimhs* dafnilai){
    string cari;
    cout << "\nApakah anda ingin mencari nilai berdasarkan nama? (y/n) : ";
    cin >> cari;

    if(cari == "y" || cari == "Y"){
            string nama;
            cout << "\n Masukan nama : ";
            cin >> nama;
            printf("\n\n====================================\n");
            printf("No\t Nama\t\t Nilai \n");
            printf("====================================\n");
            printf("====================================\n");
            for (int i=0;i<=2;i++){
                if(nama == dafnilai[i].nama){
                    printf("%d\t %s\t %d \n",i+1,dafnilai[i].nama, dafnilai[i].nilai);
                }
            }
    }
}
