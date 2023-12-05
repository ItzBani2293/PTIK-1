#include <iostream>
#include <vector>
using namespace std;

struct Data {
    string nama,pekerjaan,status,alamat,tipe,ket,nik,kk,penghasilan;
};

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
