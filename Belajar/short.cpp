#include <iostream>
using namespace std;

int main(){

	int nilai['n'];
	int temp;
	int n;

	cout <<"Banyak Data :";
	cin  >> n;
	cout << endl;

	for(int a = 1; a <= n; a++){
		cout <<"NIlai[" << a <<"] :";
		cin  >> nilai[a];
	}
	cout << endl;
	for(int a = n-1; a >= 1; a--){
		for(int b = 1; b <= a; b++){
			if(nilai[b] > nilai[b+1]){
				temp = nilai[b+1];
				nilai[b+1] = nilai[b];
				nilai[b] = temp;
			}
		}
	}
	cout <<"\nData Setelah Diurutkan (Ascending)" << endl;
	for(int a = 1; a <= n; a++){
		cout << nilai[a] <<" ";
	}
	cout <<"\n\n";
	cout <<"\n\nData Setelah Diurutkan(Descending" << endl;
	for(int a = n; a >= 1; a--){
		cout << nilai[a] <<" ";
	}
}
