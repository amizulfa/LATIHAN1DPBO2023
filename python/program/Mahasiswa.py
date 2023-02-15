# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

# class declaration
class Mahasiswa:

    # private attributes memakai double underscore(__)
    __nama = ""
    __nim = 0
    __prodi = ""
    __fakultas = ""

    # constructor
    def __init__(self, nama="", nim=0, prodi="",fakultas=""):
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas

    # Getter and Setter

    #get Nama
    def getNama(self):
        return self.__nama

    #set Nama
    def setNama(self, nama):
        self.__nama = nama
        
    #get Nim
    def getNim(self):
        return self.__nim
        
    #set Fakultas
    def setNim(self, nim):
        self.__nim = nim
    
    #get Prodi
    def getProdi(self):
        return self.__prodi
        
    #set Fakultas
    def setProdi(self, prodi):
        self.__prodi = prodi
    #get Prodi    
    def getFakultas(self):
        return self.__fakultas
        
    #set Fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

