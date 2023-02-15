/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

/* Deklarasi Class Mahasiswa */
public class Mahasiswa
{
    // Private attributes
    private String nama;
    private int nim;
    private String prodi;
    private String fakultas;

     /* contructor */
    public Mahasiswa()
    {
    }

    // Constructor dengan parameter
    public Mahasiswa(String nama, int nim, String prodi, String fakultas)
    {
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    /* Getter dan Setter*/
    // Get name
    public String getNama()
    {
        return this.nama;
    }

    // Set name
   public  void setNama(String nama)
    {
        this.nama = nama;
    }

    // get nim
    public int getNim()
    {
        return this.nim;
    }

    // set nim
    public void setNim(int nim)
    {
        this.nim = nim;
    }

    // Get Prodi
    public String getProdi()
    {
        return this.prodi;
    }

    // Set Prodi
    public void setProdi(String prodi)
    {
        this.prodi = prodi;
    }

    // Get Fakultas
    public String getFakultas()
    {
        return this.fakultas;
    }

    // Set Fakultas
    public void setFakultas(String fakultas)
    {
        this.fakultas = fakultas;
    }
}
