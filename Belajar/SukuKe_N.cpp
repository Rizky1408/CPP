#include <iostream>
using namespace std;

int main()
{
	
	float a,b,n,hasil1,hasil2;
	
	
	system("clear");
	cout <<" ====Pogram Hitung Suku ke-N====\n\n";
	
	
	// inputan dari user
	cout <<"Masukan Suku Pertama         :";
	cin  >>a;
	cout <<"Masukan beda/selisih bilangan:";
	cin  >>b;
	cout <<"Masukan Suku ke-N            :";
	cin  >>n;

    cout << endl;
	
	// Rumus Suku ke-N
	hasil1 = a+(n-1)*b;
    hasil2 = n/2*(a+hasil1);
	cout <<"Suku ke-" << n <<" adalah :"<< hasil1 << endl;
	cout <<"Jumlah dari suku ke-"<< n <<" adalah :"<< hasil2 << endl;	

	
	cout <<"\nSemoga Bermanfaat ^_^"<< endl;
	
	cout <<"\n\n\n";
	cout <<"design by RIZKY ADI RYANTO    "<< endl;
	
	
cin.get();
return 0;
}
