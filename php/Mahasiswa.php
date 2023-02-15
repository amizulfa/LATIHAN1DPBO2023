<!-- Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. -->
<?php
// Class declaration 
class Mahasiswa {
    // atribut private
    private $nama = '';
    private $nim = '';
    private $prodi = '';
    private $fakultas = '';
    private $foto = '';

    //constructor
    public function __construct( $nama = '', $nim = '', $prodi='', $fakultas='', $foto='' ) {
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
        $this->foto = $foto;
    }

    // Getter dan Setter
    //set nama
    public function setNama($nama){
        $this->nama = $nama;
    }
    //get nama
    public function getNama(){
        return $this->nama;
    }
    //set nim
 
    public function setNim($nim){
        $this->nim = $nim;
    }
    //get nim

    public function getNim(){
        return $this->nim;
    }   
    //set prodi
    public function setProdi($prodi){
        $this->prodi = $prodi;
    }
    //get prodi
    public function getProdi(){
        return $this->prodi;
    } 
    //set fakultas
    public function getfakultas(){
        return $this->fakultas;
    }  
    //get fakultas
    public function setFakultas($fakultas){
        $this->fakultas = $fakultas;
    }
    //set foto
    public function getFoto(){
        return $this->foto;
    }
    //get foto
    public function setFoto($foto){
        $this->foto = $foto;
    }
}

?>