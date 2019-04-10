#include <iostream>
using namespace::std;

struct variabel {
string nama,nim,mk;  int uts,uas;  float tgs,abs;  double huts,huas,htgs,habs,jml; };

variabel mhs;

int grade (double j){
if (j>80)      cout<<" dengan grade ' A '";
else if (j>60) cout<<" dengan grade ' B '";
else if (j>40) cout<<" dengan grade ' C '";
else if (j>20) cout<<" dengan grade ' D '";
else           cout<<" dengan grade ' E '";
}

void inputan (){
cout<<"Masukkan nilai UTS   : ";cin>>mhs.uts; mhs.huts=(mhs.uts*20/100);
cout<<"Masukkan nilai UAS   : ";cin>>mhs.uas; mhs.huas=(mhs.uas*30/100);
cout<<"Masukkan nilai TUGAS : ";cin>>mhs.tgs; mhs.htgs=(mhs.tgs*35/100);
cout<<"Masukkan nilai ABSEN : ";cin>>mhs.abs; mhs.habs=(mhs.abs*15/100);
cout<<"_______________________________________________\n";
mhs.jml=mhs.huts+mhs.huas+mhs.htgs+mhs.habs;
cout<<"\nMahasiswa bernama : "<<mhs.nama<<", N I M  : "<<mhs.nim;
cout<<"\nDengan persentasi nilai  ";
cout<<"\nNilai UTS   murni : "<<mhs.huts;
cout<<"\nNilai UAS   murni : "<<mhs.huas;
cout<<"\nNilai TUGAS murni : "<<mhs.htgs;
cout<<"\nNilai ABSEN murni : "<<mhs.habs;
cout<<"\n\nTotal Nilai  "<<mhs.jml;
grade (mhs.jml);
}

main (){
cout<<"Nama Mahasiswa : ";getline(cin,mhs.nama);
cout<<"N I M          : ";getline(cin,mhs.nim);
cout<<"Mata Kuliah    : ";getline(cin,mhs.mk);
cout<<"\n";
inputan ();
}
