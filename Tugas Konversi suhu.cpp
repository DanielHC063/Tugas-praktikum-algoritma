#include <iostream>
using namespace std;
int main() {
	 float C,F,K,R;
	 cout<<"Konversi Suhu Dari Derajat Celcius"<<endl;
	 cout<<"Masukan suhu dalam derajat celcius \t:  ";
	 cin>>C;
	 F =((9.0/5.0) *C)+32;
	 K = 273 + C;
	 R =((4.0/9.0) *C)+32;
	 cout<<"Hasil konversi ke dalam Fahrenheit \t: "<<F<<endl;
	 cout<<"Hasil konversi ke dalam Kelvin  \t: "<<K<<endl;
	 cout<<"Hasil konversi ke dalam Reamur  \t: "<<R<<endl;
	 
}
