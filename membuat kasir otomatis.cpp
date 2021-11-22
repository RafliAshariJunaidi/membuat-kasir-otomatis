//		KELOMPOK 5
//		
//	1. NAMA : RAFLI ASHARI JUNAIDI
//	   NPM  : 2117051067
//	
//	2. NAMA : AMELIA AGUSTINA NAINGGOLAN
//	   NPM  : 2117051080
//	   	
//	3. NAMA : RIZKY ABDILAH NURUDIN
//	   NPM  : 2117051060

#include<iostream>
using namespace std;
				
//				Fungsi
//Fungsi merupakan suatu bagian dari program c++ yang di maksudkan untuk mengerjakan suatu tugas tertentu dan letaknya terpisah dari program yang memanggilnya

void paket1(){
	cout<<">"<<" PAKET MAKAN KENYANG 1 \n";
	cout<<" AYAM GORENG + JUS JERUK \n";
	cout<<" "<<endl;
}

void paket2(){
	cout<<">"<<" PAKET MAKAN KENYANG 2 \n";
	cout<<" NASI GORENG + ES TEH \n";
	cout<<" "<<endl;
}

void paket3(){
	cout<<">"<<" PAKET MAKAN KENYANG 3 \n";
	cout<<" NASI CAMPUR + JUS JERUK \n";
	cout<<" "<<endl;
}
	
void daftar(){
    cout<<"============================================"<<endl;
    cout<<"               RUMAH MAKAN                  "<<endl;
    cout<<"               SELERA KITA                  "<<endl;
    cout<<"        Aplikasi Kasir Rumah Makan          "<<endl;
    cout<<"============================================"<<endl;
	cout<<""<<endl;
    cout<<" Menu Makanan          Harga"<<endl;
    cout<<"1. AYAM GORENG        Rp. 10.000"<<endl;
    cout<<"2. NASI GORENG        Rp.  7.000"<<endl;
    cout<<"3. MIE PANGSIT        Rp. 11.000"<<endl;
    cout<<"4. NASI CAMPUR        Rp.  8.000"<<endl;
    cout<<"5. JUS JERUK          Rp.  6.000"<<endl;
    cout<<"6. PAKET 1            Rp. 15.000"<<endl;
    cout<<"7. PAKET 2            Rp. 12.000"<<endl;
    cout<<"8. PAKET 3            Rp. 14.000"<<endl;
    cout<<""<<endl;
    cout<<"0. BAYAR"                        <<endl;
   	cout<<" "<<endl;
    cout<<"============================================"<<endl;
    cout<<"              MENU PAKET                 "<<endl; 
	cout<<" "<<endl;
   
    paket1();
    paket2();
    paket3();
	cout<<"============================================"<<endl;
	cout<<" "<<endl;
	
}

//    		Variabel
//variabel adalah sebuah nama lokasi penyimpanan di dalam memori.
//Sementara tipe data adalah jenis data yang akan disimpan di dalam variabel.
int main(){
	int harga[8]={10000,7000,11000,8000,6000,15000,12000,14000}, jumlah_menu, total, pilihan, bayar, kembali;
	string menu;
	
	daftar();

//    		output
// => output adalah informasi yang dihasilkan setelah dilakukan proses. Output biasanya ditampilkan di layar komputer.

	
//			perulangan menggunakan do while
// => perulangan do while akan melakukan perulangan sebanyak 1 kali terlebih dahulu, lalu mengecek kondisi yang ada di dalam kurung while.
	do{
	cout<<"Masukkan Kode Menu : ";
	cin>>pilihan;
//   		percabangan menggunakan switch case
// => percabangan switch case adalah bentuk lain dari percabangan if else, kita dapat membuat blok kode (case) sebanyak yang diinginkan di dalam blok switch

//    		operator perkalian
// => operator adalah sebuah simbol, simbol yang digunakan untuk melakukan operasi tertentu. 
//    misalkan : ingin mengalikan suatu bilangan nilai dari variabel x dan y, maka kita bisa menggunakan operator perkalian(*)
		switch(pilihan){
			case 1 :
				menu = "AYAM GORENG";
				cout<<"Jumlah menu : ";
				cin>>jumlah_menu;
			    total += harga[0]*jumlah_menu;
				cout<<menu<<" "<<jumlah_menu;
				cout<<" = Rp. "<<harga[0]*jumlah_menu<<endl;
				cout<<" "<<endl;
				break;
				
			case 2 :
				menu = "NASI GORENG";
				cout<<"Jumlah menu : ";
				cin>>jumlah_menu;
				total += harga[1]*jumlah_menu;
				cout<<menu<<" "<<jumlah_menu;
				cout<<" = Rp. "<<harga[1]*jumlah_menu<<endl;
				cout<<" "<<endl;
				break;
				
			case 3 :
				menu = "MIE PANGSIT";
				cout<<"Jumlah menu : ";
				cin>>jumlah_menu;
				total += harga[2]*jumlah_menu;
				cout<<menu<<" "<<jumlah_menu;
				cout<<" = Rp. "<<harga[2]*jumlah_menu<<endl;
				cout<<" "<<endl;
				break;	
				
			case 4 :
				menu = "NASI CAMPUR";
				cout<<"Jumlah menu : ";
				cin>>jumlah_menu;
				total += harga[3]*jumlah_menu;
				cout<<menu<<" "<<jumlah_menu;
				cout<<" = Rp. "<<harga[3]*jumlah_menu<<endl;
				cout<<" "<<endl;
				break;
				
			case 5 :
				menu = "JUS JERUK";
				cout<<"Jumlah menu : ";
				cin>>jumlah_menu;
				total += harga[4]*jumlah_menu;
				cout<<menu<<" "<<jumlah_menu;
				cout<<" = Rp. "<<harga[4]*jumlah_menu<<endl;
				cout<<" "<<endl;
				break;	
				
			case 6 :
				menu = "PAKET 1";
				cout<<"Jumlah menu : ";
				cin>>jumlah_menu;
				total += harga[5]*jumlah_menu;
				cout<<menu<<" "<<jumlah_menu;
				cout<<" = Rp. "<<harga[5]*jumlah_menu<<endl;
				cout<<" "<<endl;
				break;	
				
			case 7 :
				menu = "PAKET 2";
				cout<<"Jumlah menu : ";
				cin>>jumlah_menu;
				total += harga[6]*jumlah_menu;
				cout<<menu<<" "<<jumlah_menu;
				cout<<" = Rp. "<<harga[6]*jumlah_menu<<endl;
				cout<<" "<<endl;
				break;	
				
			case 8 :
				menu = "PAKET 3";
				cout<<"Jumlah menu : ";
				cin>>jumlah_menu;
				total += harga[7]*jumlah_menu;
				cout<<menu<<" "<<jumlah_menu;
				cout<<" = Rp. "<<harga[7]*jumlah_menu<<endl;
				cout<<" "<<endl;
				break;		
				
			case 0 :
				cout<<"Total Harga : Rp. "<<total<<endl;
				pilihan = 0;
				cout<<" "<<endl;
				break;
				
			default :
				cout<<"Menu Tidak Ada"<<endl;
				cout<<" "<<endl;				
		}
	}while(pilihan != 0);
	
	cout<<"============================================"<<endl;
	cout<<"              STRUK PEMBAYARAN              "<<endl;
	cout<<" "<<endl;
	cout<<"Total Harga   = Rp. "<<total<<endl;
	cout<<"Uang Diterima = Rp. ";
	cin>>bayar;
	cout<<" "<<endl;
	kembali = bayar - total;
	if(bayar<total){
		cout<<"Uang Tidak Cukup"<<endl;
	}else if(bayar>total){
	cout<<"Kembalian     = Rp. "<<kembali<<endl;

	cout<<" "<<endl;
	cout<<"        TERIMA KASIH TELAH BERKUNJUNG       "<<endl;
}
	cout<<"============================================"<<endl;
	
	return 0;
}
