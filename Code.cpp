#include <iostream>
#include <vector>
using namespace std;

struct Data {
    string nama,pekerjaan,status,alamat,tipe,ket;
    int nik1,nik2,kk;
    float penghasilan;
};

// Fungsi untuk menampilkan seluruh data
void tampilkanData(const vector<Data>& data) {
    cout << endl << "Data saat ini:" << endl;
    for (const auto& d : data) {
        cout << "Nama: " << d.nama << ", Umur: " << d.nik1 << d.nik2 << endl;
    }
}

// Fungsi untuk menambahkan data baru
void tambahData(vector<Data>& data) {
    Data newData;
    cout << "Masukkan Nama: ";
    cin >> newData.nama;
    cout << "Masukkan NIK: ";
    cin >> newData.nik1;
    cin >> newData.nik2;

    data.push_back(newData);
    cout << "Data berhasil ditambahkan." << endl;
}

// Fungsi untuk mengedit data
void editData(vector<Data>& data) {
    string nama;
    cout << "Masukkan Nama yang ingin diedit: ";
    cin >> nama;

    for (auto& d : data) {
        if (d.nama == nama) {
            cout << "Masukkan NIK baru: ";
            cin >> d.nik1 >> d.nik2;
            cout << "Data berhasil diubah." << endl;
            return;
        }
    }

    cout << "Data tidak ditemukan." << endl;
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
		cout << "Pilihan invalid";
	}
}

int main() {
    vector<Data> data;

    int pilihan;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tampilkan Data" << endl;
        cout << "2. Tambah Data" << endl;
        cout << "3. Edit Data" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanData(data);
                break;
            case 2:
                tambahData(data);
                break;
            case 3:
                editData(data);
                break;
            case 4:
                hapusData(data);
                break;
            case 5:
                return 0;
            default:
                cout << "Pilihan tidak valid." << endl;
        }

        cout << endl;
    }

    return 0;
}
