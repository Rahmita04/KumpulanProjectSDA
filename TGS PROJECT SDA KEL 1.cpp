#include <iostream>

using namespace std;

int main (){
	int kodemenu, jumlah;
	double harga, totalharga = 0, totalKeseluruhan = 0;
	char pilihan;
	
	//menampilkan daftar 
	cout << "======================================" << endl;
	cout << "     KANTIN TEKNIK INFORMATIKA      " << endl;
	cout << "======================================"<< endl;
	cout << "-------------Daftar Menu--------------"<< endl;
	cout << "======================================" << endl;
	cout << "No.  Nama Menu            Harga" << endl;
	cout << "======================================"<< endl;
	cout << "1. Mie Ayam Pangsit	: Rp.15.000"<< endl;
	cout << "2. Nasi Goreng		: Rp.10.000"<< endl;
	cout << "3. Soto Ayam dan nasi	: Rp.15.000"<< endl;
	cout << "4. Mie Indomie		: Rp.7.000"<< endl;
	cout << "5. Es Teh		: Rp.4.000"<< endl;
	cout << "6. Kopi			: Rp.4.000"<< endl;
	cout << "======================================"<< endl;
	
	//input perhitungan pesanan
	do{
		//input kode menu
		cout << "Masukkan Kode Menu :";
		cin >> kodemenu;
		
		//deklarasi kode menu
		if (kodemenu >= 1 && kodemenu <= 6){
			cout << "Masukkan Jumlah Menu :";
			cin >> jumlah;
			
			//menghitung total harga
			switch (kodemenu){
				case 1:
					harga = 15000;
					break;
				case 2:
					harga = 10000;
					break;
				case 3:
					harga = 15000;
					break;
				case 4:
					harga = 7000;
					break;
				case 5:
					harga = 4000;
					break;
				case 6:
					harga = 4000;
					break;
			}
			totalharga = harga * jumlah;
			totalKeseluruhan += totalharga;
		}else {
            cout << "Kode Menu tidak valid." << endl;
        }
			
			//menampilkan total harga dan menanyakan apakah ingin memesan lagi
			cout << "Total Harga : Rp."<< totalharga << endl;
			cout << "Apakah ingin menambah pesanan? (y/n) :";
        	cin >> pilihan;

    	}while (pilihan == 'y' || pilihan == 'Y');
    
    	 // perhitungan pembayaran dan kembalian
		    double bayar;
		    cout << "\n======================================" << endl;
		    cout << "Total Harga Keseluruhan : Rp." << totalKeseluruhan << endl;
		    cout << "Masukkan Jumlah Uang Pembayaran : Rp.";
		    cin >> bayar;
		
		    double kembalian = bayar - totalKeseluruhan;
		    if (kembalian >= 0) {
		        cout << "Kembalian : Rp." << kembalian << endl;
		    } else {
		        cout << "Jumlah uang pembayaran kurang." << endl;
		    }
		
	    cout << "======================================" << endl;
			
	return 0;
}

