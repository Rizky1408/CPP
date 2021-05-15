#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream myFile;
	string data,temp;

	system("clear");

	myFile.open("data.txt");
	
	getline(myFile,temp);
	data.append(temp);
	getline(myFile,temp);
	data.append("\n" + temp);

	myFile.close();

	cout << data << endl;

	return 0;
}