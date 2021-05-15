#include <iostream>
using namespace std;

int main(){

	int data[10], index[10], i,j,x,n;
	char lanjut;

	system("clear");
	cout <<"Masukan Jumlah data [Max 10] :";
	cin  >> n;

	for(i = 0; i < n; i++){
		cout <<"Masukan Data Ke -" << i + 1 <<":";
		cin  >> data[i];
	}
	system("clear");
	cout <<"Data yang anda masukan adalah " << endl;
	for(i = 0; i < n; i++){
		cout << data[i] <<" ";
	}
	cout << endl << endl;
	menu:
	cout <<"Masukan data yang anda akan cari :";
	cin  >> x;

	j=0;
	for(i = 0; i < n; i++){
		if(data[i] == x){
			index[j]=i;
			j++;
		}
	}

	if(j > 0){
		cout <<"Data " << x <<" yang di cari ada " << j <<" buah" << endl;
		cout <<"Data tersebut terdapat dalam index ke :";
		for(i = 0; i < j; i++){
			cout << index[i] <<" ";
		}
		cout << endl;
	}
	else {
		cout <<"Data tidak ditemukan dalam array ingin lanjut (y/t)";
		cin  >> lanjut;
		if(lanjut == 'y' || lanjut == 'Y'){
			goto menu;
		}else {
			return 0;
		}
	}

}
