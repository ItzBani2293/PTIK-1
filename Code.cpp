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

int main() {
    vector<Data> data;

    int pilihan;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tampilkan Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Keluar"
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanData(data);
                break;
            case 2:
            	hapusData(data);
            	break;
            case 3:
                return 0;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }

        cout << endl;
    }

    return 0;
}
