/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */
#include <iostream>
#include <string>

using namespace std;

// deklarasi class
class Mahasiswa
{
    // atribut private
private:
    string nama;
    int nim;
    string prodi;
    string fakultas;

    // method public
public:
    /* contructor */
    Mahasiswa()
    {
        this->nama = "";
        this->nim = 0;
        this->prodi = "";
        this->fakultas = "";
    }

    /* constructor dengan parameter */
    Mahasiswa(string nama, int nim, string prodi, string fakultas)
    {
        this->nama = nama;
        this->nim = nim;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }

    /* Getter dan Setter*/

    // Get name
    string getNama()
    {
        return this->nama;
    }

    // Set name
    void setNama(string nama)
    {
        this->nama = nama;
    }

    // Get nim
    int getNim()
    {
        return this->nim;
    }

    // Set nim
    void setNim(int nim)
    {
        this->nim = nim;
    }

    // Get Prodi
    string getProdi()
    {
        return this->prodi;
    }

    // Set Prodi
    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }

    // Get Fakultas
    string getFakultas()
    {
        return this->fakultas;
    }

    // Set Fakultas
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    /* Desturctor */
    ~Mahasiswa()
    {
    }
};
