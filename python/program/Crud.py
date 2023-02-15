# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

#import class Mahasiswa
from Mahasiswa import Mahasiswa

#deklarasi class Crud
class Crud:
    #atribut private
    __listMhs=[]
        
    # public method tambah atau create data
    def tambah(self, mhs):
        print("========================================" )
        print("Banyaknya Data : " )
        # inout berapa banyak data yang akan ditambahkan pada list
        n=int(input())
        for i in range (n):
            # instantiation object
            mhs = Mahasiswa()
            print("--Masukan Nama--")
            nama = str(input())
            print("--Masukan NIM--")
            nim = int(input())
            print("--Masukan Prodi--")
            prodi = str(input())
            print("--Masukan Fakultas--")
            fakultas = str(input())
            
            mhs.setNama(nama)
            mhs.setNim(nim)
            mhs.setProdi(prodi)
            mhs.setFakultas(fakultas)
            self.__listMhs.append(mhs)
    
    # method hapus untuk menghapus data pada list
    # dengan mencari nim data pada list
    def hapus(self,hapus):
        # variabel cek untuk mengecek apakah data tersebut ada atau tidak
        cek = 0
        for self.__mhs in self.__listMhs:
            # jika data ditemukan maka hapus
            if(self.__mhs.getNim()==hapus):
                self.__listMhs.remove(self.__mhs);
                cek=1
        if(cek==0):
            print("========================================")
            print("Data Tidak Ditemukan")
        
    # method update untuk mengupdate data pada list
    # dengan cara mencari nim terlebih dahulu sebelum diupdate
    def update(self,cari):
        cek = 0 
        for self.__mhs in self.__listMhs:
            if(self.__mhs.getNim()==cari):
                print("--Masukan Nama--")
                nama = str(input())
                print("--Masukan NIM--")
                nim = int(input())
                print("--Masukan Prodi--")
                prodi = str(input())
                print("--Masukan Fakultas--")
                fakultas = str(input())

                # jika data ditemukan maka update data tersebut
                self.__mhs.setNama(nama)
                self.__mhs.setNim(nim)
                self.__mhs.setProdi(prodi)
                self.__mhs.setFakultas(fakultas)
                cek=1
        if(cek==0):
            print("========================================") 
            print("Data Tidak Ditemukan")
    
    # method show atau menampilkan semua data pada list
    def show(self):
        print("============Daftar Mahasiswa============")
        i=0
        cek=0
        for self.__mhs in self.__listMhs:
            print(str(i+1)+".", self.__mhs.getNama(), "|", self.__mhs.getNim(),"|", self.__mhs.getProdi(),"|", self.__mhs.getFakultas())
            i += 1
            cek=1
        if(cek==0):
            print("---------Daftar Mahasiswa Kosong---------")
                
            