#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "Masukkan Jumlah Data Pada Array : ";
		cin >> n;

		if (n <= 20) {     // Membuat Kondisi n Tidak Lebih Dari 20
			break;
		}
		else {
			cout << "\nArray Yang Anda Masukkan Maksimal 20 Elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {      // Menggunakan Perulangan For Untuk Menyimpan Data Pada Array
		cout << "Data Ke- " << (i + 1) << ": ";      // Memasukkan / Menginputkan Nilai Data n
		cin >> arr[i];
	}
}