#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream myFile;

	// membuka file data.txt
	myFile.open("data.txt"); 

	// menulis ke dalam data.txt
	myFile <<"Hallo Rizky adi ryanto\nApa kabar"; 
	
	// menutup file data.txt
	myFile.close();


	return 0;
}