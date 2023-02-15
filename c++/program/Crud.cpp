/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

using namespace std;
/* Deklarasi Class Crud*/
class Crud
{
    /*Atribut Private*/
private:
    list<Mahasiswa> llist; // deklarasi list
    string nama;
    int nim;
    string prodi;
    string fakultas;

    /* Public Method */
public:
    /* Konstruktor*/
    Crud()
    {
    }

    /* Method Create atau menambah data ke list */
    void tambah(Mahasiswa mhs)
    {
        int i, n;
        cout << "========================================" << '\n';
        // masukan berapa banyak data yang akan ditambahkan
        cout << "Banyaknya Data : " << '\n';
        cin >> n;
        for (i = 0; i < n; i++)
        {
            // input object
            Mahasiswa mhs;

            // attribute input
            cout << "--Masukan Nama--" << '\n';
            cin >> nama;
            cout << "--Masukan NIM--" << '\n';
            cin >> nim;
            cout << "--Masukan Prodi--" << '\n';
            cin >> prodi;
            cout << "--Masukan Fakultas--" << '\n';
            cin >> fakultas;

            // masukan input ke dalam input object
            mhs.setNama(nama);
            mhs.setNim(nim);
            mhs.setProdi(prodi);
            mhs.setFakultas(fakultas);
            // masukan input object ke dalam list
            this->llist.push_back(mhs);
        }
    }

    /* Method update untuk mengupdate data dari list */
    void update(int cari)
    {
        int cek = 0; // untuk mengecek apakah data yang dicari ada pada list atau tidak
        for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            if (it->getNim() == cari) // jika data ditemukan , maka update data tersebut sesuai nim yang dicari
            {
                cout << "--Masukan Nama--" << '\n';
                cin >> nama;
                cout << "--Masukan NIM--" << '\n';
                cin >> nim;
                cout << "--Masukan Prodi--" << '\n';
                cin >> prodi;
                cout << "--Masukan Fakultas--" << '\n';
                cin >> fakultas;

                it->setNama(nama);
                it->setNim(nim);
                it->setProdi(prodi);
                it->setFakultas(fakultas);
                cek = 1;
            }
        }
        if (cek == 0)
        {
            cout << "Data Tidak ditemukan" << '\n';
        }
    }

    /* Method hapus atau delete untuk menghapus data pada list */
    void hapus(int hapus)
    {
        int cek = 0; // untuk mengecek apakah data yang dicari ada pada list atau tidak
        for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            if (it->getNim() == hapus) // jika data ditemukan, maka hapus data pada list sesuai dengan nim yang dicari
            {
                llist.erase(it);
                cek = 1;
                break;
            }
        }
        if (cek == 0)
        {
            cout << "Data Tidak Ditemukan!" << '\n';
        }
    }

    /* Method untuk menampilkan seluruh data */
    void show()
    {
        cout << "============Daftar Mahasiswa============" << '\n';
        int i = 0;
        int cek = 0;
        for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            cout << (i + 1) << ". " << it->getNama() << " | " << it->getNim() << " | " << it->getProdi() << " | " << it->getFakultas() << '\n';
            i++;
            cek = 1;
        }
        if (cek == 0)
        {
            cout << "---------Daftar Mahasiswa Kosong---------" << '\n';
        }
    }
    /* Destructor */
    ~Crud()
    {
    }
};
