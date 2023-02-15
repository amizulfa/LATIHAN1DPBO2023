/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */
import java.util.ArrayList;
import java.util.Scanner;

/* Deklarasi Class Crud */
public class Crud {
    /* Atribut Private */
    private ArrayList<Mahasiswa> llist; //deklarasi list
    private String nama;
    private int nim;
    private String prodi;
    private String fakultas;
    
    /* Constructor */
    public Crud(){
        llist = new ArrayList<Mahasiswa>();
    }

    /* Method Create atau menambah data ke list */
    public void tambah(Mahasiswa mhs){
        //tambahkan ke list
        llist.add(mhs);
    }

    /* Method hapus atau delete untuk menghapus data pada list */
    public void hapus(int hapus){
        for ( int i = 0; i < llist.size(); i++) {
            if (llist.get(i).getNim()==hapus) {
                llist.remove(i);
            }
        }
    }

    /* Method update untuk mengupdate data dari list */
    public void update(int cari){
        for ( int i = 0; i < llist.size(); i++) {
            if (llist.get(i).getNim()==cari) {
                Scanner sc = new Scanner(System.in);
                System.out.println("--Masukan Nama--");
                nama=sc.next();
                
                System.out.println("--Masukan NIM--");
                nim=sc.nextInt();
                System.out.println("--Masukan Prodi--");
                prodi=sc.next();
                System.out.println("--Masukan Fakultas--");
                fakultas=sc.next();

                llist.get(i).setNama(nama);
                llist.get(i).setNim(nim);
                llist.get(i).setProdi(prodi);
                llist.get(i).setFakultas(fakultas);
                //sc.close();
            }
        }
    }

    /* Method untuk menampilkan seluruh data */
    public void show(){
        System.out.println("============Daftar Mahasiswa============");
        for ( int i = 0; i < llist.size(); i++) {
            System.out.println(Integer.toString(i+1) + ". " + llist.get(i).getNama() + " | " + llist.get(i).getNim()+ " | " + llist.get(i).getProdi()+ " | " + llist.get(i).getFakultas());
        }
    }
}
