#include <iostream>
using namespace std;

double tambah(double a,double b);
double kurang(double ,double b);
double kali(double a,double b);
double bagi(double a,double b);

int main(){
	double x,y;
	int pil;

	cout <<"Masukan Bilangan pertama :";
	cin  >> x;
	cout <<"Masukan Bilangan kedua   :";
	cin  >> y;
	cout << endl;

	cout <<"1.Pertambahan   2.Pengurangan\n"
	     <<"3.Perkalian     4.Pembagian\n"
             << endl;
	cout <<"Masukan pilihan operator :";
	cin  >> pil;
	cout <<"Hasil =";
	
	switch(pil){
	
		case 1 :
			cout << tambah(x,y);
			break;

		case 2 :
			cout << kurang(x,y);
			break;

		case 3 :
			cout << kali(x,y);
			break;

		case 4 :
			cout << bagi(x,y);
			break;

		default :
			cout <<"Anda salah memasukan operator" << endl;

	}	

}
double tambah(double a,double b){
	return a + b;
}

double kurang(double a,double b){
	return a - b;
}

double kali(double a,double b){
	return a * b;
}

double bagi(double a,double b){
	return a / b;
}




