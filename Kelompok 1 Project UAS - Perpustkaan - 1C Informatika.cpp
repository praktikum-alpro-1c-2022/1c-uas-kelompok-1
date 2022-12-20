#include <iostream>
using namespace std;

int jumlah_buku;
char k[4];
string jenis [5]= {"Fiksi Fantasi", "Fiksi Sejarah", "Buku Remaja", "Buku Puisi", "Sains Non-Fiksi"},
judul [5] = {"Power Ranger", "Citra Rashmi", "Remaja Fisabilillah", "Pantun Jarjit", "Teori Albert Enstein"};

struct tanggal{
    int tt, bb, yyyy;
};
struct tanggal mnjm,blk,bts;

struct buku{
    int banyak_buku;
    string kode;
    int HargaSewa;
};
void header (){
    cout << "\n\t\t\t================================================================\n\n";
    cout << "\n\t\t\t        SELAMAT DATANG DI PROGRAM PERPUSTAKAAN SEDERHANA\n";
    cout << "\n\t\t\t                R U A N G  B A C A  K I T A\n";
    cout << "\n\t\t\t             KELOMPOK 1 - 1C INFORMATIKA UNSIKA\n\n";
    cout << "\n\t\t\t================================================================\n\n";
}
void awal (){
    system("color 80");
    header();
    cout << "\n\t\t\tSyarat Dan Ketentuan Peminjaman Buku:\n";
    cout << "\n\t\t\t1. Mengisi data peminjaman buku";
    cout << "\n\t\t\t2. Membayar tarif buku pinjaman yang telah ditentukan";
    cout << "\n\t\t\t3. Mengembalikan buku sesuai dengan batas peminjaman (7 hari)";
    cout << "\n\t\t\t4. Apabila terlambat mengembalikan buku akan dikenakan denda Rp 1.000/hari";
    cout << "\n\t\t\t5. Harap menjaga buku dengan baik\n";
    cout << "\n\t\t\t*Uang tersebut akan dialokasikan untuk pembelian buku baru";

    cout << "\n\n\n\t\t\tMasukkan nama anda : ";
}
void daftar (){
    system ("color F0");
    cout << "\t\t\t==============================================================================\n\n";
    cout << "\t\t\t                           DAFTAR BUKU PERPUSTAKAAN        \n";
    cout << "\t\t\t                         R U A N G   B A C A  K I T A \n\n";
    cout << "\t\t\t==============================================================================\n\n";

    cout << "\t\t\t-----------------------------------------------------------------------------\n";
    cout << "\t\t\t|  KODE BUKU  |       JENIS BUKU      |      NAMA BUKU      |   TARIF BUKU  |\n";
    cout << "\t\t\t-----------------------------------------------------------------------------\n";
    cout << "\t\t\t|    FF001    | Fiksi Fantasi         | Power Ranger        | Rp. 3.000     |\n";
    cout << "\t\t\t|    FS002    | Fiksi Sejarah         | Citra Rashmi        | Rp. 2.000     |\n";
    cout << "\t\t\t|    BR003    | Buku Remaja           | Remaja Fisabilillah | Rp. 5.000     |\n";
    cout << "\t\t\t|    BP004    | Buku Puisi            | Pantun Jarjit       | Rp. 1.000     |\n";
    cout << "\t\t\t|    SN005    | Sains Non-fiksi       | Teori Albert Enstein| Rp. 4.000     |\n";
    cout << "\t\t\t-----------------------------------------------------------------------------\n\n";


}

int minjemBuku(buku* w){
    for (int i = 0; i<jumlah_buku; i++){
        cout << "\n\t\t\tBuku ke-" << i+1;
        cout << "\n\t\t\tMasukan Kode Buku [FF001,FS002,BR003,BP004,SN005] : ";
        cin >> w[i].kode;
        if (w[i].kode == "FF001"||w[i].kode == "ff001"){
            k[i] = 0;
            cout << "\t\t\tBuku yang anda pilih            : " << jenis [k[i]] << " - " <<judul [k[i]] << endl;
            cout << "\t\t\tBanyak buku yang ingin dipinjam : ";
            cin >> w[i].banyak_buku;
            w[i].HargaSewa = w[i].banyak_buku * 3000;
        }else if (w[i].kode == "FS002"||w[i].kode == "fs002"){
            k[i] = 1;
            cout << "\t\t\tBuku yang anda pilih            : " << jenis [k[i]] << " - " <<judul [k[i]] << endl;
            cout << "\t\t\tBanyak buku yang ingin dipinjam : ";
            cin >> w[i].banyak_buku;
            w[i].HargaSewa = w[i].banyak_buku * 2000;
        }else if (w[i].kode == "BR003"||w[i].kode == "br003"){
            k[i] = 2;
            cout << "\t\t\tBuku yang anda pilih            : " << jenis [k[i]] << " - " <<judul [k[i]] << endl;
            cout << "\t\t\tBanyak buku yang ingin dipinjam : ";
            cin >> w[i].banyak_buku;
            w[i].HargaSewa = w[i].banyak_buku * 5000;
        }else if (w[i].kode == "BP004"||w[i].kode == "bp004"){
            k[i] = 3;
            cout << "\t\t\tBuku yang anda pilih            : " << jenis [k[i]] << " - " <<judul [k[i]] << endl;
            cout << "\t\t\tBanyak buku yang ingin dipinjam : ";
            cin >> w[i].banyak_buku;
            w[i].HargaSewa = w[i].banyak_buku * 1000;
        }else if (w[i].kode == "SN005"||w[i].kode == "sn005"){
            k[i] = 4;
            cout << "\t\t\tBuku yang anda pilih            : " << jenis [k[i]] << " - " <<judul [k[i]] << endl;
            cout << "\t\t\tBanyak buku yang ingin dipinjam : ";
            cin >> w[i].banyak_buku;
            w[i].HargaSewa = w[i].banyak_buku * 4000;
        }else{
            cout << "\n\t\t\tMasukan Kode Yang Tersedia !!!\n\n";
            minjemBuku(w);
        }

}
}
void peminjaman (){
    system ("color 0E");
    cout << "\n\n\t\t\tDATA PEMINJAMAN";
    cout << "\n\t\t\tTanggal Pinjam  : ";
    cin >> mnjm.tt;
    cout << "\t\t\tBulan Pinjam    : ";
    cin >>mnjm.bb;
    cout << "\t\t\tTahun Pinjam    : ";
    cin >> mnjm.yyyy;
}
void kembali (){
    system ("color 0E");
    cout << "\n\n\t\t\tDATA PENGEMBALIAN";
    cout << "\n\t\t\tTanggal Kembali : ";
    cin >> blk.tt;
    cout << "\t\t\tBulan Kembali   : ";
    cin >>blk.bb;
    cout << "\t\t\tTahun Kembali   : ";
    cin >> blk.yyyy;
}
void kartu (){
    cout << "\n\t\t\t================================================================\n\n";
    cout << "\n\t\t\t       Kartu Tanda Anggota dan Peminjaman Buku Perpustakaan\n";
    cout << "\n\t\t\t                R U A N G  B A C A  K I T A\n";
    cout << "\n\t\t\t             KELOMPOK 1 - 1C INFORMATIKA UNSIKA\n\n";
    cout << "\n\t\t\t================================================================\n\n";
}

int main (){
int lamaPinjam,terlambat,denda ;
string n;
buku w[5];
int pil;
char enter;
awal ();
cin >> n;
menu :
system ("cls");
system("color 80");
header();
cout << "\t\t\tPilihan Menu:\n";
cout << "\n\t\t\t1. Daftar Buku";
cout << "\n\t\t\t2. Peminjaman Buku";
cout << "\n\t\t\t3. Pengembalian Buku";
cout << "\n\t\t\t4. Rekap";
cout << "\n\t\t\t5. About";
cout << "\n\n\n\t\t\t0. Keluar\n";
cout << "\n\n\n\t\t\tPilih Menu : "; cin >> pil;
system ("cls");
switch(pil){
case 1:
    daftar();
    cout << "\t\t\tBack to menu ? (Y,y)"; cin >>enter;
    goto menu;
    break;
case 2:
    daftar();
    cout << "\t\t\tNama Peminjam                                  : " << n;
    cout << "\n\t\t\tMasukkan Jumlah Jenis Buku yang ingin Dipinjam : ";
    cin >> jumlah_buku;
    minjemBuku(w);
    peminjaman ();
    bts.tt = mnjm.tt+7;
    bts.bb = mnjm.bb+(bts.tt/31);
    bts.yyyy = mnjm.yyyy+(bts.bb/13);
    if(bts.tt>30){
    bts.tt-=30;
    }
    if(bts.bb>12){
    bts.bb-=12;
    }
    cout << "\n\t\t\tTanggal Peminjaman     : " << mnjm.tt << "/" << mnjm.bb << "/" << mnjm.yyyy;
    cout << "\n\t\t\tJatuh Tempo Peminjaman : " << bts.tt << "/" << bts.bb << "/" << bts.yyyy;
    cout << "\n\n\t\t\tBack to menu ? (Y,y)"; cin >>enter;
    goto menu;
    break;
case 3:
    header();
    cout << "\t\t\tNama Peminjam      : " << n;
    cout << "\n\t\t\tTanggal Peminjaman : " << mnjm.tt << "/" << mnjm.bb << "/" << mnjm.yyyy;
    kembali();
    lamaPinjam = (blk.tt-mnjm.tt)+((blk.bb-mnjm.bb)*30)+((blk.yyyy-mnjm.yyyy)*360);
    terlambat = lamaPinjam - 7;

    cout << "\n\t\t\tTanggal Kembali        : " << blk.tt << "/" << blk.bb << "/" << blk.yyyy;
    cout << "\n\t\t\tJatuh Tempo Peminjaman : " << bts.tt << "/" << bts.bb << "/" << bts.yyyy;
    cout << "\n\t\t\tLama Peminjaman        : " << lamaPinjam << " Hari\n";
    cout << "\t\t\tLama Keterlambatan     : " <<terlambat << " Hari\n";
    cout << "\n\n\t\t\tBack to menu ? (Y,y)"; cin >>enter;
    goto menu;
    break;
case 4:
 {
    system ("color 60");
    kartu();
    cout << "\t\t\tNama Peminjam         : " << n;
    cout << "\n\t\t\tBuku Yang anda pinjam :\n";
    int totalhargasewa = 0;
    for (int i = 0; i<jumlah_buku; i++){
        cout << "\n\t\t\tBuku ke-" << i+1;
        cout << "\n\t\t\tJenis Buku  : " << jenis [k[i]];
        cout << "\n\t\t\tJudul Buku  : " << judul [k[i]];
        cout << "\n\t\t\tBanyak Buku : " << w[i].banyak_buku;
        cout << "\n\t\t\tHarga Sewa  : Rp." << w[i].HargaSewa << endl;
        totalhargasewa += w[i].HargaSewa;
    }
    cout << "\n\t\t\tTotal Harga sewa : Rp." << totalhargasewa;
    cout << "\n\n\t\t\tTanggal Peminjaman     : " << mnjm.tt << "/" << mnjm.bb << "/" << mnjm.yyyy;
    cout << "\n\t\t\tJatuh Tempo Peminjaman : " << bts.tt << "/" << bts.bb << "/" << bts.yyyy;
    cout << "\n\t\t\tTanggal Kembali        : " << blk.tt << "/" << blk.bb << "/" << blk.yyyy;
    cout << "\n\t\t\tLama Peminjaman        : " << lamaPinjam << " Hari\n";
    cout << "\t\t\tLama Keterlambatan     : " <<terlambat << " Hari\n";
    if (lamaPinjam > 7){
    denda = terlambat*1000;
    }else{
    denda = 0;
    }
    cout << "\n\t\t\tDenda yang harus dibayarkan : Rp." << denda;
    int subtotal = totalhargasewa + denda;
    cout << "\n\n\t\t\tSubtotal  : Rp." << subtotal;
    cout << "\n\n\t\t\tBack to menu ? (Y,y)"; cin >>enter;
    goto menu;
    break;
}
case 5:
    system ("color 04");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t=============================================\n";
    cout << "\t\t\t\tProgram Ini dibuat dengan senang hati oleh :\n";
    cout << "\t\t\t\tMuhammad Reynaldo Aulia Rachman yang ganteng\n";
    cout << "\t\t\t\tMuhammad Rifky Akbar yang ganteng \n";
    cout << "\t\t\t\tJouvanytha Aswar Affendy yang cantik\n";
    cout << "\t\t\t\t=============================================\n";
    cout << "\n\n\n\n\n\n\t\t\t\tBack to menu ? (Y,y)"; cin >>enter;
    goto menu;
    break;
case 0:
    system ("color C0");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t=========================================================\n";
    cout << "\t\t\t\tTerimakasih " << n << " sudah mengunjungi perpustakaan ini\n";
    cout << "\t\t\t\t      jangan lupa untuk selalu meningkatkan literasi \n";
    cout << "\t\t\t\t         literasi adalah kunci menguasai dunia\n";
    cout << "\t\t\t\t          jangan lupa untuk kembali yaaaa<3\n";
    cout << "\t\t\t\t=========================================================\n";
}
return 0;
}
