#include <iostream>
#include <vector>
using namespace std;

struct Data {
    string nama,pekerjaan,status,alamat,tipe,ket,nik,kk,penghasilan;
};

// Fungsi untuk menampilkan seluruh data
void tampilkanData(const vector<Data>& data) {
    cout << endl << "Data saat ini:" << endl;
    for (const auto& d : data) {
        cout << "Nama: " << d.nama << ", No KK: " << d.kk << ", No NIK: " << d.nik << ", Pekerjaan: " << d.pekerjaan;
        cout << ", Penghasilan: Rp." << d.penghasilan << ", Status: " << d.status << ", Alamat Desa: " << d.alamat << ", Tipe Sembako: " << d.tipe;
		cout << ", Ket: " << d.ket << endl << endl;
    }
}

// Fungsi untuk mengedit data
void editData(vector<Data>& data) {
    string nama,pilihan;
    
    cout << "Apakah ingin melihat data dulu ?" << endl;
    cout << "(Y/N) ";
    cin >> pilihan;
    
    if(pilihan=="y"){
    	
    	tampilkanData(data);
    	
    	cout << "Masukan Nama yang ingin diedit: ";
    	cin >> nama;
    	
    	for(auto& d : data){
    		if(d.nama == nama){
    			cout << "Masukan Nama baru: ";
    			cin >> d.nama;
    			cout << "Masukan No KK baru: ";
    			cin >> d.kk;
    			cout << "Masukan No NIK baru: ";
    			cin >> d.nik;
    			cout << "Masukan Pekerjaan baru: ";
    			cin >> d.pekerjaan;
    			cout << "Masukan Penghasilan baru: ";
    			cin >> d.penghasilan;
    			cout << "Masukan Status baru: ";
    			cin >> d.status;
    			cout << "Masukan Alamat (Desa) baru: ";
    			cin >> d.alamat;
    			cout << "Masukan Tipe Sembako baru: ";
    			cin >> d.tipe;
    			cout << "Masukan Ket baru: ";
    			cin >> d.ket;
    			cout << "Data berhasil diubah." << endl;
    			return;
			}
		}
		
		cout << "Data tidak ditemukan." << endl;
		
	}else if(pilihan=="n"){
		for(auto& d : data){
    		if(d.nama == nama){
    			cout << "Masukan Nama baru: ";
    			cin >> d.nama;
    			cout << "Masukan No KK baru: ";
    			cin >> d.kk;
    			cout << "Masukan No NIK baru: ";
    			cin >> d.nik;
    			cout << "Masukan Pekerjaan baru: ";
    			cin >> d.pekerjaan;
    			cout << "Masukan Penghasilan baru: ";
    			cin >> d.penghasilan;
    			cout << "Masukan Status baru: ";
    			cin >> d.status;
    			cout << "Masukan Alamat (Desa) baru: ";
    			cin >> d.alamat;
    			cout << "Masukan Tipe Sembako baru: ";
    			cin >> d.tipe;
    			cout << "Masukan Ket baru: ";
    			cin >> d.ket;
    			cout << "Data berhasil diubah." << endl;
    			return;
			}
		}
		
		cout << "Data tidak ditemukan." << endl;
		
	}else{
		cout <<  "Pilihan Invalid" << endl;
		return;
	}

    cout << "Data tidak ditemukan." << endl;
}

int main() {
    vector<Data> data;

    int pilihan;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tampilkan Data" << endl;
        cout << "2. Edit Data" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanData(data);
                break;
            case 2:
                editData(data);
                break;
            case 3:
                return 0;
            default:
                cout << "Pilihan tidak valid." << endl;
        }

        cout << endl;
    }

    return 0;
}
