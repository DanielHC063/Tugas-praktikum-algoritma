#include <iostream>
#include <iomanip>



using namespace std;
int main(){
	/* input data */
	string  nim,nama,plug;
	int jumlahstr;
	cout << "Masukan\t: "<< endl;
	
	cout << "\nNama  \t: ";
	getline (cin,nama) ;
	cout << "Nim \t: ";
	getline (cin,nim);
	cout << "Plug\t: ";
	getline (cin,plug);
	 
	 /* output dari data */
	 
	 cout << "\nInilah data Anda : " <<endl;
	 
	 cout << "\nNama : "<< nama << endl;
	 cout << "Nim  : "<< nim << endl;
	 cout << "Plug : "<< plug<< endl;
	/* mencari jumlah string*/
	 jumlahstr =nama.length()+nim.length()+plug.length()+12;
	 
	 
	 cout << "\nDalam bentuk tabel : "<<endl;
	 
	 cout << setfill('=')<<setw(jumlahstr)<<'='<< endl;
	 cout <<setfill(' ')<<"|" 
	      <<setw(3)<<"NIM"<<setw(nim.length())<<'|'<<
	      setw(3)<<"Nama"<<setw(nama.length()) << '|'<<
	      setw(3)<<"Plug"<<endl;
	cout << setfill('=')<<setw(jumlahstr)<<'='<< endl;
	 cout <<setfill(' ')
	      << '|'<<setw(3)<<nim 
	      << setw (3)
		  << '|'<<setw(3)<<nama 
		  << setw (4)
		  << '|' <<setw(3)<<plug ;
		  
	 
	 
	 
	
}
