#include <iostream>
using namespace std;

int main()
{
    int a,b,c,pil;
    float saldo = 300000;
    
    string password;
    string d;
    char lanjut;
    
    system("clear");
/*---------Header Program ATM-----------*/ 
cout <<"\t==============================\n"
     <<"\t         Program ATM\n"
     <<"\t        Pecahan 50000\n"
     <<"\t  Design by Rizky Adi Ryanto\n"
     <<"\t==============================\n\n";
    

cout <<"\t ^Selamat Datang Di ATM Kami^\n\n\n";
    
    
    cout <<"\t    Masukan Kartu ATM Anda\n\n";
    
    menu:
          /*----password----*/
    cout <<"Masukan PIN ATM Anda :";
    cin  >>password;
    system("clear");
         /*--if password-- */  
if(password == "12345"){
        cout <<"\nMasukan Pilihan :\n";
        cout <<"1.Tarik Tunai\n\n";
        cout <<"2.Transfer\n\n";
        cout <<"3.Cek Saldo\n\n";
        
    cout <<"Masukan Menu yang dipilih :";
    cin  >>pil;
    
        //penggunaan switch,case
    switch(pil){
            case 1:
            cout <<"Masukan Jumlah Yang ingin di tarik :";
            cin  >>a;
            /*--if saldo--*/
            if(saldo<a){
                cout <<"\n\nSaldo Anda Tidak cukup anjir\n\n\n";
             
            }
            
            /*--else saldo--*/
            else{
            a = saldo-a;
            cout <<"Terimakasih,Saldo Anda sekarang adalah :"<<a<<endl;
            }
            break;
            
            case 2:
            cout <<"Masukan Nomor rek yang dituju :";
            cin  >>b;
            cout <<"Masukan Jumlah Yang akan di kirim :";
            cin  >>c;
            
            cout <<" No rek :"<< b << endl;
            cout <<"Jumlah  :"<< c << endl;
            cout <<"Apakah sudah benar y/t:";
            cin  >>d;
            
              if(saldo <= c){
                cout <<"Saldo Anda Tidak Cukup";
            }
            
           if(d == "y"){
                cout <<"Transaksi Sedang Di proses";
                
            }
            else if(d == "t"){
                cout <<"\n\nMaaf,Ulangi Langkah Dari Awal";
            }
            break;
            
            
            case 3:
            cout <<"Saldo Anda Sebesar :"<< saldo << endl;
            break;
        }
    
      }
    
          /*----else password----*/
    else{
        cout <<"\nMaaf,PIN yang Anda masukan salah ! ";
    }
    cout << endl;
    cout <<"Ingin Bertransaksi lagi (y/t) :";
    cin  >> lanjut;

    if(lanjut == 'y' || lanjut == 'Y'){
        goto menu;
    }
    else {
        system("clear");
         cout <<"\n\n\n"
              <<"\t=========================\n"
              <<"\tSampai Jumpa Lagi ^_^\n"
              <<"\t=========================\n";
        return 0;
    }
    system("clear");
    cout <<"\n\n\n"
         <<"\t=========================\n"
         <<"\tSampai Jumpa Lagi ^_^\n"
         <<"\t=========================\n";
cin.get();
return 0;
}