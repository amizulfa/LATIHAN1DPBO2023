# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

#import class Crud dan Mahasiswa
from Mahasiswa import Mahasiswa
from Crud import Crud

# instantiation object Crud
arr = Crud()
# instantiation object Mahasiswa
mhs=Mahasiswa()
# inisialisasi variabel
apa=int

# selama input menu bukan 5, maka program terus berjalan
while(apa!="5"):
    print("========================================")
    print(" MENU : " )
    print(" 1. Tambah Data " )
    print(" 2. Tampilkan Data " )
    print(" 3. Update Data " )
    print(" 4. Delete Data " )
    print(" 5. Keluar Program ")
    print("========================================" )
    print("Masukan Pilihan : " )
    apa=str(input())
    
    if(apa=="1"):
        # jika menu 1, maka panggil method tambah dari class Crud
        arr.tambah(mhs)
    elif(apa=="2"):
        # jika menu 2, maka panggil method show dari class Crud
        arr.show()
    elif(apa=="3"):
        # jika menu 3, maka panggil method update dari class Crud
        print("masukan NIM yang akan diupdate");
        cari=int(input());
        arr.update(cari);
    elif(apa=="4"): 
        # jika menu 4, maka panggil method hapus dari class Crud
        print("masukan NIM yang akan dihapus");
        hapus=int(input());
        arr.hapus(hapus);           
        
    
