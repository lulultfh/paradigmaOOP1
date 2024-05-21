#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien { //asosiasi
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) :nama(pNama) {
        cout << "pasien \"" << nama << "\" ada\n";
    }
    ~pasien() {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahDokter(dokter*);
    void cetakDokter();
};

class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pNama) :nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }

    void tambahPasien(pasien*);
    void cetakPasien();
};

void pasien::tambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter?() {
    cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
    for (auto& a : daftar-dokter) {//auto digunakan dalam perulangan for untuk secara otomatis menentukan tipe data dari elemen yang diiteraas
    }
    cout << endl;
}