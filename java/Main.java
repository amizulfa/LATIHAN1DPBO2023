/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// Import library
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Crud arr= new Crud();   //instantiation object
        int i;
        int n = 0;
        String nama;
        int nim;
        String prodi;
        String fakultas;
        int cari=0; // variabel untuk menampung nim yang akan dihapus
        int hapus=0;    // variabel cari untuk menampung nim yang akan diupdate

        Scanner sc = new Scanner(System.in);
        int apa=0;  // variabel untuk pilihan menu
        // selama menu bukan 5 maka program masih berjalan
        while (apa!=5) {
            System.out.println("========================================");
            System.out.println(" MENU : ");
            System.out.println(" 1. Tambah Data ");
            System.out.println(" 2. Tampilkan Data");
            System.out.println(" 3. Update Data");
            System.out.println(" 4. Delete Data");
            System.out.println(" 5. Keluar Program");
            System.out.println(" Masukan Pilihan : ");
            System.out.println("========================================");
            apa=sc.nextInt();
            
            //Menu
            switch (apa) {
                // menu 1 untuk menambah atau create data 
                case 1:
                    System.out.println("========================================");
                    System.out.println("Banyaknya Data :");
                    n=sc.nextInt(); //input berapa banyak data yang akan ditambahkan
                    for ( i = 0; i < n; i++) { 
                        // input object
                        Mahasiswa mhs = new Mahasiswa();
                        System.out.println("--Masukan Nama--");
                        nama=sc.next();
                        System.out.println("--Masukan NIM--");
                        nim=sc.nextInt();
                        System.out.println("--Masukan Prodi--");
                        prodi=sc.next();
                        System.out.println("--Masukan Fakultas--");
                        fakultas=sc.next();
                    
                        mhs.setNama(nama);
                        mhs.setNim(nim);
                        mhs.setProdi(prodi);
                        mhs.setFakultas(fakultas);
                        //panggil method tambah dari class Crud
                        arr.tambah(mhs);
                    }
                    break;
                // menu 2 untuk menampilkan data
                case 2:
                    //panggil method show dari class Crud
                    arr.show();
                    break;
                //menu 3 untuk mengupdate data
                case 3:
                    System.out.println("Masukan NIM yang akan diupdate :");
                    cari=sc.nextInt();
                    //panggil method update dari class Crud
                    arr.update(cari);
                    break;
                //menu 4 untuk menghapus data
                case 4:
                    System.out.println("Masukan NIM yang akan dihapus :");
                    hapus=sc.nextInt();
                    //panggil method hapus dari class crud
                    arr.hapus(hapus);
                    break;
                default:
                    break;
            }
        }
        //close scanner
        sc.close();
    }
}