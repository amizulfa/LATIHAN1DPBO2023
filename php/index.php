<!-- Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. -->
<?php
// require atau import file Crud
require ('Crud.php');

// instantation object
$data = new Crud();

// hardcode data
echo '<center><h1>Daftar Mahasiswa</h1>';
$data->tambah('Amida','2101147','Ilmu Komputer','FPMIPA','assets\1.jpg');
$data->tambah('Zulfa','1112223','Ilmu Gizi','FIP', 'assets\2.jpg');
$data->tambah('Laila','1234567','Ilmu Kelautan','FPIPS', 'assets\3.jpg');
$data->tambah('Amida Zulfa Laila','0987654','Teknik Elektro','FPTK', 'assets\4.jpg');
// menampilkan seluruh data mahasiswa
$data->show();
// menghapus data dengan nim tertentu
$data->hapus('2101147');
echo '<br>';
echo '<center><h1>Setelah Dihapus</h1>';
// menampikan data setelah penghapusan
$data->show();
echo '<br>';
// mengupdate data dengan nim tertentu, dan memasukan inputan baru
$data->update('1112223','Amizulfa','2222222','Ilkom','FPMIPA','assets\5.jpg');
echo '<center><h1>Setelah Diupdate </h1>';
// menampilkan data setelah proses penghapusan dan update data
$data->show();
echo '<br>';
?>