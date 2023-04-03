#include <iostream>

using namespace std;


struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string	nim;
	string	nama;
	AlamatDetail alamat;
	int		umur;
};

int main() {

	Mahasiswa mhs;

	cout << "Masukkan NIM : ";
	cin >> mhs.nim;
	cout << "Masukkan Nama :";
	cin >> mhs.nama;
	cout << "Alamat" << endl;
	cout << "\t Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t Kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;

	cout << "\n NIM : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n Desa : " << mhs.alamat.desa;
	cout << "\n Kota : " << mhs.alamat.kota;
	cout << "\n Umur : " << mhs.umur;
}


