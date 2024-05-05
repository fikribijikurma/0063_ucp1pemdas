// 1.Deklarasi variabel dengan tipe data int x = 5; string y= "Hello"; bool z = true; 
// = 3 variabel dengan tipe data yang berbeda bool, char, dan string.
// 2.contoh implementasi dari prosedur dan fungsi
#include<iostream>
using namespace std;

//Fungsi
int hitungLuaspersegi(int sisi) {
	int luas = sisi * sisi;
	return luas;
}

// Prosedur
void tampilkanPesan(string nama) {
	cout << "Halo, " << nama << "!" << endl;
}
int main() {
	// pemanggilan fungsi
	int hasil = hitungLuaspersegi(5);
	cout << "Luas persegi dengan sisi 5 adalah" << hasil << endl; // Output luas pesegi dengan sisi 5 adalah 25

	// pemanggilan prosedur
	tampilkanpesan("john"); // Output:Halo,john!

	return 0;
}

// 3.contoh implementasi dari looping
// For Loop
for (int i = 0; i < 5; i++) {
	System.out.println(i); // Output: 0 1 2 3 4
}
// While Loop
int count = 0;
while (vount < 5) {
	System.out.println(count);
	count++; // Output: 0 1 2 3 4
}

// 4.contoh implementasi dari conditional statement
// if Statement 
int x = 10;
if (x > 5) {
	cout << "x lebih besar dari 5" << endl; // Output:x lebih besar dari 5
}

// If-Else Statement
int y = 3;
if (y > 5) {
	cout << "y lebih besar dari 5" << endl;
}
else {
	cout << "y tidak lebih besar dari 5" << endl; // Output:y tidak lebih besar dari 5
}

// If-Else Statement
int z = 7;
if (z < 5) {
	cout << "z kurang adri 5" << endl;
}
else if (z == 5) {
	cout << "z sama denagn 5" << endl;
}
else {
	cout << "z lebih besar dari 5" << endl; // Output:z lebih besar dari 5
}

// 5.contoh implementasi dari struct
#include<iostream>
#include<string>
using namespace std;

//Deklarasi struct
stuct Mahasiswa()
{
	string nama;
	int umur;
	float ipk;
};

int main()
{
	// Membuat variabel dengan tipe data struct
	Mahasiswa 1;

	// Mengisi nilai pada anggota struct
	mahasiswa1.nama = "john Doe";
	mahasiswa1.umur = 20;
	mahasiswa1.ipk = = 3.8;

	// Mengakses anggota struct
	cout << "Nama: " << mahasiswa1.nama << endl;
	cout << "Umur: " << mahasiswa1.umur << endl;
	cout << "IPK: " << mahasiswa1.ipk << endl;

	return 0;
}
