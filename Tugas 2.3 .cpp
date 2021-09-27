#include <iostream>

using namespace std;
int main(){
	int a,b,c,d;
	char nama[50];
cout<<"Program Zonasi COVID-19 Kelurahan-Kelurahan Pada Kecamatan"<<endl;
cout<<"Ketik (1) untuk jawaban Ada"<<endl;
cout<<"Ketik (2) untuk jawaban Tidak Ada"<<endl;
cout<<"Masukan Nama Kelurahan \t: ";
cin.getline(nama,sizeof(nama));
cout<<"Apakah pada daerah anda terdapat kasus positif dan kematian?"<<endl;
cout<<"jawaban : ";
cin>>a;
if(a==1){
	cout<<"apakah daerah anda terdapat ODP Covid-19?"<<endl;
	cout<<"jawaban : ";
	cin>>b ;
	if(b==1){
		cout<<"apakah daerah anda terdapat kasus positif Covid-19?"<<endl;
		cout<<"jawaban : ";
		cin>>c;
		if(c==1){
			cout<<"apakah daerah anda terdapat kasus kematian akibat Covid-19?"<<endl;
			cout<<"jawaban : ";
			cin>>d;
			if(d==1){
				cout<<"Daerah anda dalam ZONA HITAM"<<endl;
			
			}
			else if (d==2){
				cout<<"Daerah anda dalam ZONA MERAH"<<endl;
			}
			else { 
				cout<<"Data yang anda input salah";
			}

}
else if (c==2){
	cout<<"Daerah anda dalam ZONA ORANGE"<<endl;
}
else {
	cout<<"Data yang anda input salah"<<endl;
}


}
else if (b==2){
		cout<<"Daerah anda dalam ZONA HIJAU"<<endl;
	}
else{
		cout<<"Data yang anda input salah"<<endl;
	}



}
else if(a==2) {
	cout<<"Daerah anda dalam ZONA HIJAU"<<endl;
}
else {
	cout<<"Data yang anda input salah"<<endl;
}	
return 0;
}






