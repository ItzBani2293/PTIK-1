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

// Fungsi untuk menambahkan data baru
void tambahData(vector<Data>& data) {
    Data newData;
    cout << endl;
    cout << "Masukkan Nama: ";
    cin >> newData.nama;
    cout << "Masukkan No KK: ";
    cin >> newData.kk;
    cout << "Masukan No NIK: ";
    cin >> newData.nik;
    cout << "Masukan Pekerjaan: ";
    cin >> newData.pekerjaan;
    cout << "Masukan Penghasilan: ";
    cin >> newData.penghasilan;
    cout << "Masukan Status: ";
    cin >> newData.status;
    cout << "Masukan Alamat Desa: ";
    cin >> newData.alamat;
    cout << "Masukan Tipe Sembako: ";
    cin >> newData.tipe;
    cout << "Masukan Ket: ";
    cin >> newData.ket;

    data.push_back(newData);
    cout << "Data berhasil ditambahkan." << endl;
}

// Fungsi untuk menghapus data
void hapusData(vector<Data>& data) {
    string nama,pilihan;
    
    cout << "Apakah ingin melihat data dulu ?" << endl;
    cout << "(Y/N) ";
    cin >> pilihan;
    
    if(pilihan=="y"){
    	
    	tampilkanData(data);
    	
    	cout << "Masukan Nama yang ingin dihapus : ";
    	cin >> nama;
    	
    	for(auto it = data.begin(); it !=data.end(); ++it){
    		if(it->nama == nama){
    			data.erase(it);
    			cout << "Data berhasil dihapus." << endl;
    			return;
			}
		}
		
		cout << "Data tidak ditemukan." << endl;
	}else if(pilihan=="n"){
		cout << "Masukan Nama yang ingin dihapus : ";
		cin >> nama;
		
		for(auto it = data.begin(); it !=data.end(); ++it){
			if(it->nama == nama){
				data.erase(it);
				cout << "Data berhasil dihapus." << endl;
				return;
			}
		}
		
		cout << "Data tidak ditemukan." << endl;
	}else{
		cout << "Pilihan invalid" << endl;
		return;
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
        cout << "2. Tambah Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Edit Data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanData(data);
                break;
            case 2:
            	tambahData(data);
            	break;
            case 3:
                hapusData(data);
                break;
            case 4:
            	editData(data);
            	break;
            case 5:
            	return 0;
            	break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }

        cout << endl;
    }

    return 0;
}
