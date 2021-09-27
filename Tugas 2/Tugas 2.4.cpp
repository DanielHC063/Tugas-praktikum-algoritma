#include <iostream>

using namespace std;
int main(){
 int jenis_1,jenis_2;
 int jumlah_1,jumlah_2;
 int total_kuota_1,total_kuota_2;
 int tkuota,total_biaya;
 
 
 cout<<"Biaya yang Harus Dikeluarkan Pemerintah Dalam Bantuan Kuota"<<endl;
 cout<<"\nMasukan Setiap jawaban sesuai dengan ketentuan jawaban"<<endl;
 cout<<"Ketik (1) untuk pengajar di tingkat Sekolah Dasar hingga Menengah"<<endl;	
 cout<<"Ketik (2) untuk pengajar di tingakat Pendidikan Tinggi"<<endl;
 cout<<"Masukan jenis pengajar \t:";
 cin>>jenis_1;
 switch (jenis_1){
	 case 1 :
			cout<<"Masukan jumlah pengajar  :";
			cin>>jumlah_1;
			total_kuota_1=jumlah_1*42;
			cout<<"Total kuota Pengajar \t:"<<total_kuota_1<<"GB"<<endl;
			break;
	 case 2 :
			cout<<"Masukan jumlah pengajar: ";
			cin>>jumlah_1;
			total_kuota_1=jumlah_1*50;
			cout<<"Total kuota Pengajar \t:"<<total_kuota_1<<"GB"<<endl;
			break;
	 default:
			total_kuota_1=0;
			cout<<"Data yang anda masukan salah"<<endl;
}
cout<<"Ketik (1) untuk siswa PAUD"<<endl;
cout<<"Ketik (2) untuk siswa SD"<<endl;
cout<<"Ketik (3) untuk siswa SMP"<<endl;
cout<<"Ketik (4) untuk siswa SMA"<<endl;
cout<<"Ketik (5) untuk mahasiswa"<<endl;
cout<<"masukan jenis siswa \t:";
cin>>jenis_2;
switch (jenis_2){
	case 1 :cout<<"Masukan jumlah siswa \t: ";
			cin>>jumlah_2;
			total_kuota_2=jumlah_2*20;
			cout<<"total kuota siswa \t: "<<total_kuota_2<<"GB"<<endl;
			break;
	case 2 :cout<<"Masukan jumlah siswa \t:";
			cin>>jumlah_2;
			total_kuota_2=jumlah_2*35;
			cout<<"total kuota siswa \t:"<<total_kuota_2<<"GB"<<endl;
			break;
	case 3 :cout<<"Masukan jumlah siswa\t: ";
			cin>>jumlah_2;
			total_kuota_2=jumlah_2*35;
			cout<<"total kuota siswa \t:"<<total_kuota_2<<"GB"<<endl;
			break;
	case 4 :cout<<"Masukan jumlah siswa \t:";
			cin>>jumlah_2;
			total_kuota_2=jumlah_2*35;
			cout<<"total kuota siswa \t:"<<total_kuota_2<<"GB"<<endl;
			break;
	case 5 :cout<<"Masukan jumlah siswa \t:";
			cin>>jumlah_2;
			total_kuota_2=jumlah_2*50;
			cout<<"total kuota siswa \t:"<<total_kuota_2<<"GB"<<endl;
			break;
	default :
			total_kuota_2=0;
			cout<<"Data yang anda input salah"<<endl;
	}
	tkuota=total_kuota_1+total_kuota_2;
	cout<<"Total kuota keseluruhan \t\t\t:"<<tkuota<<"GB"<<endl;
	total_biaya=tkuota*6000;
	cout<<"Total biaya yang harus dikeluarkan Pemerintah \t:"<<total_biaya<<endl;
	return 0;
}
