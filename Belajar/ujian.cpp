#include <iostream>
using namespace std;

int main(){
	system("clear");
	int i,j,temp;
	int jmax,u = 6;
	array <int, 7> data_jual;

	cout <<"DATA PENJUALAN UD.BERLIAN\n";
	cout <<"\n Input KODE Data Barang Laku Harian\n";
	for(i = 0; i < 7; i++){
		cout <<"\nMasukan Kode Penjualan ke-" << i + 1 <<":";
		cin  >> data_jual[i];
	}

	cout << endl;
	cout <<"Kode Data Barang Laku Hari ini adalah =" << endl;
	for(i = 0; i < 7; i++){
		cout << data_jual[i]<<" ";
	}

	cout << endl;
	for(i = 0; i < 7; i++){
		jmax = 0; 
		for(j = 1; j <= u; j++){
			if(data_jual[j] > data_jual[jmax]){
				jmax = j;
			}
		}
		temp = data_jual[u];
		data_jual[u] = data_jual[jmax];
		data_jual[jmax] = temp;
		u--;
	}

	cout << endl;
	cout <<"Kode Data Barang Laku Hari Ini setelah di urutkan adalah " << endl;
	for(i = 0; i < 7; i++){
		cout << data_jual[i] <<" ";
	}

cout << endl;
return 0;
}
