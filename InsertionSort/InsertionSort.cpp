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

	for (int i = 0; i < n; i++) {                    // Menggunakan Perulangan For Untuk Menyimpan Data Pada Array
		cout << "Data Ke- " << (i + 1) << ": ";      // Memasukkan / Menginputkan Nilai Data n
		cin >> arr[i];
	}
}

void insertsort() {
	int temp;
	int j;

	for (int i = 0; i < n; i++) {              // Looping Dengan i Dimulai Dari 1 Hingga n-1
		temp = arr[i];

		j = i - 1;								// Setting j Sama Dengan i - 1

		while (j >= 0 && arr[j] > temp) {       // Looping While Dimana Nilai j Lebih Besar Sama Dengan 0 dan 
												// Arr[j] Lebih Besar Daripada Temp
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;

		cout << "\nStep " << i << ": ";      
		for (int k = 0; k < n; k++) {           // Looping Nilai K Dimulai Dari 0 Hingga n-1
			cout << arr[k] << " ";
		}
	}
}

void display() {
	cout << endl;
	cout << "\n=================================" << endl;
	cout << "Element Array Yang Telah Tersusun" << endl;
	cout << "=================================" << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main() {
	input();
	insertsort();
	display();
}