#include <iostream>
using namespace std;

int main(){
    system("clear");
    int a = 5;
    int *b;
    b = &a;

    cout <<"a.Nilai dari variabel a  :" << a  << endl;
    cout <<"b.alamat dari variabel a :" << &a << endl;
    cout <<"c.Isi dari variabel b    :" << b  << endl;
    cout <<"d.Nilai dari variabel b  :" << *b << endl;
}