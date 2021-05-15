#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct
{
	char nama[30];
	short umur;
	
}orang;

int main(){
	int i;
	orang saya[5];

	cout <<"DATA SISWA DAN UMURNYA" << endl;
	for(i = 0; i <= 4; i++){
		cout <<"Masukkan nama siswa ke- " << i+1 <<"=";
		cin  >> saya[i].nama;
		cout <<"Masukkan umur = ";
		cin  >> saya[i].umur;
	}

	cout <<"DATABASE" << endl;
	cout <<"========" << endl;
	for(i = 0; i <= 4; i++){
		cout <<"\nNama :" << saya[i].nama <<"\tBerumur :" <<saya[i].umur << endl;
	}

cin.get();
}
