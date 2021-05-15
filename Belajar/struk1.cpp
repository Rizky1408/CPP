#include <iostream>
using namespace std;

int main(){
	system("clear");
	struct 
	{
		char nama[40];
		short umur;
		
	}saya;
	cout <<"Nama :";
	cin  >> saya.nama;
	cout <<"Umur :";
	cin  >> saya.umur;
	
	cout << endl;

	cout <<"Keluaran" << endl;
	cout <<"Nama :" << saya.nama << endl;
	cout <<"Umur :" << saya.umur << endl;

cin.get();
}
