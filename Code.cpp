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

int main() {
    vector<Data> data;

    int pilihan;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tampilkan Data" << endl;
        cout << "2. Keluar" << endl;
        cout << "Pilih menu (1-2): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanData(data);
                break;
            case 2:
                return 0;
            default:
                cout << "Pilihan tidak valid." << endl;
        }

        cout << endl;
    }

    return 0;
}
