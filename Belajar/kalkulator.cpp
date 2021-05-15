#include <iostream>
using namespace std;

int main(){
    float bilangan1,bilangan2,hasil;
    int pilihan;

    system("clear");
    cout <<"KALKULATOR SEDERHANA" << endl;
    cout <<"    2 BILANGAN      " << endl;
    cout <<"--------------------" << endl;
    cout << endl << endl;

    cout <<"            OPTION  " << endl;
    cout <<"1.Penjumlahan    2.Pengurangan\n"
         <<"3.Perkalian      4.Pembagian\n"
         << endl;
    cout <<"Masukan Pilihan :";
    cin  >> pilihan;
    cout << endl;
    cout <<"Masukan Bilangan Pertama :";
    cin  >> bilangan1;
    cout <<"Masukan Bilangan Kedua   :";
    cin  >> bilangan2;

    if(pilihan == 1){
        hasil = bilangan1 + bilangan2;
        cout <<"Hasil dari " << bilangan1 <<" + " << bilangan2 <<" = " << hasil << endl;
    }
    else if(pilihan == 2){
        hasil = bilangan1 - bilangan2;
        cout <<"Hasil dari " << bilangan1 <<" - " << bilangan2 <<" = " << hasil << endl;
    }
    else if(pilihan == 3){
        hasil = bilangan1 * bilangan2;
        cout <<"Hasil dari " << bilangan1 <<" * " << bilangan2 <<" = " << hasil << endl;
    } 
    else if(pilihan == 4){
        hasil = bilangan1 / bilangan2;
        cout <<"Hasil dari " << bilangan1 <<" / " << bilangan2  <<" = " << hasil << endl;
    }
    else {
        cout <<"Pilihan tidak ditemukan" << endl;
    }

cin.get();
}