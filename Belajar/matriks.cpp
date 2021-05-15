#include <iostream>
using namespace std;

int main(){

	int matriks1[10][10],matriks2[10][10];
	int i,j,m,n;
	
	system("clear");
	cout <<"Masukan Jumlah Baris Pada Matriks :";
	cin  >> m;
	cout <<"Masukan Jumlah Kolom Pada Matriks :";
	cin  >> n;
	cout << endl;

	cout <<"Masukan Nilai Pada Matriks A :" << endl;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cout <<"Data[" << i <<"][" << j <<"]=";
			cin  >> matriks1[i][j];
		}
	}
	cout << endl;

	cout <<"Masukan Nilai Pada Matriks B :" << endl;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cout <<"Data[" << i <<"][" << j <<"]=";
			cin  >> matriks2[i][j];
 		}
	}
	cout << endl;

	cout <<"--MATRIKS A--" << endl;
	for (i = 0; i < m; i++){
		cout <<"[ ";
		for (j = 0; j < n; j++){
			cout << matriks1[i][j] <<" ";
		}
		cout <<"]" << endl;
	}
	cout << endl << endl;

	cout <<"--MATRIKS B--" << endl;
	for(i = 0; i < m; i++){
		cout <<"[ ";
		for(j = 0; j < n; j++){
			cout << matriks2[i][j] <<" ";
		}
		cout <<"]" << endl;
	}
}
