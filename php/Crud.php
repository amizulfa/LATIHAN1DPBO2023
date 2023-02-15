<!-- Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. -->
<?php
// require file Mahasiswa atau import file Mahasiswa
require ('Mahasiswa.php');
    // class declaration
    class Crud{
        // atribut private 
        private $arrMhs = array(); //deklarasi array
        private $nama='';
        private $nim='';
        private $prodi='';
        private $fakultas='';
        private $foto='';

        // constructor
        public function __construct( $nama = '', $nim ='', $prodi='', $fakultas='', $foto='' ) {
            $this->nama = $nama;
            $this->nim = $nim;
            $this->prodi = $prodi;
            $this->fakultas = $fakultas;
            $this->foto = $foto;
        }

        // public method tambah, untuk create atau menambahkan data pada array
        public function tambah($nama, $nim , $prodi, $fakultas, $foto){
            $mhs = new Mahasiswa($nama , $nim, $prodi, $fakultas, $foto);
            array_push($this->arrMhs, $mhs);
        }

        // public method  untuk menampilkan seluruh data
        public function show()
        {
        $nomor=1;
        echo "<center><table border='1' width='50%' height='50%'>";
        echo "<tr align='center'>
            <th width='10%'> No </th>
            <th width='25%'> Nama </th>
            <th width='25%'> NIM </th>
            <th width='25%'> Program Studi </th>
            <th width='25%'> Fakultas </th>
            <th width='25%'> Foto </th>
            </tr>";
        for($x = 0; $x < sizeof($this->arrMhs); $x++){
            echo "<tr  align='center'>";
            echo '<td>'.$nomor.'</td><td>';
            echo $this->arrMhs[$x]->getNama();
            echo "</td><td>";
            echo $this->arrMhs[$x]->getNim();
            echo "</td><td>";
            echo $this->arrMhs[$x]->getProdi();
            echo "</td><td>";
            echo $this->arrMhs[$x]->getFakultas();
            echo "</td><td>";
            echo "<img src='" . $this->arrMhs[$x]->getFoto(). "'style='width: 100px'>";
            echo "</td>";
            echo "</tr>";
            $nomor++;
        }
            echo "</table> </center>";
        }

        // public method hapus, untuk delete atau menghapus data pada array
        public function hapus($nimHps){
            for ($i=0; $i < sizeof($this->arrMhs); $i++) { 
                if ($this->arrMhs[$i]->getNim()==$nimHps) {
                    array_splice($this->arrMhs,$i,1);
                }
            }
        }

        // public method update, untuk edit atau mengupdate data pada array
        public function update($nimUpdate, $nama, $nim, $prodi, $fakultas, $foto){
            for ($i=0; $i < sizeof($this->arrMhs); $i++) {
                if ($this->arrMhs[$i]->getNim()==$nimUpdate) {
                    $this->arrMhs[$i]->setNama($nama);
                    $this->arrMhs[$i]->setNim($nim);
                    $this->arrMhs[$i]->setProdi($prodi);
                    $this->arrMhs[$i]->setFakultas($fakultas);
                    $this->arrMhs[$i]->setFoto($foto);
                }
            }
        }
    }

?>