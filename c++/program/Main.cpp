/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */
#include <bits/stdc++.h>
#include "Crud.cpp"

using namespace std;

int main()
{
    Crud arr;      // instantiation object dari class Crud
    int apa;       // variabel untuk pilihan menu
    int hapus;     // variabel untuk menampung nim yang akan dihapus
    int cari;      // variabel cari untuk menampung nim yang akan diupdate
    Mahasiswa mhs; // instantiation object dari class Mahasiswa

    // selama menu bukan 5 maka program masih berjalan
    while (apa != 5)
    {
        // MENU
        cout << "========================================" << '\n';
        cout << " MENU : " << '\n';
        cout << " 1. Tambah Data " << '\n';
        cout << " 2. Tampilkan Data " << '\n';
        cout << " 3. Update Data " << '\n';
        cout << " 4. Delete Data " << '\n';
        cout << " 5. Keluar Program " << '\n';
        cout << "Masukan Pilihan : " << '\n';
        cout << "========================================" << '\n';
        cin >> apa;

        switch (apa)
        {
        case 1:
            // jika menu 1 maka panggil method tambah di class Crud
            arr.tambah(mhs);
            break;
        case 2:
            // jika menu 2 maka panggil method show atau tampil di class Crud
            arr.show();
            break;
        case 3:
            // jika menu 3 maka panggil method update di class Crud
            cout << "masukan NIM yang akan diupdate" << '\n';
            cin >> cari;
            arr.update(cari);
            break;
        case 4:
            // jika menu 4 maka panggil method hapus di class Crud
            cout << "masukan NIM yang akan dihapus" << '\n';
            cin >> hapus;
            arr.hapus(hapus);
            break;
        default:
            break;
        }
    }
    return 0;
}