#include<stdio.h>
#include<iostream.h>
#include<conio.h>


int main()
{
	struct tgl
{
	unsigned hari;
   unsigned bulan;
   unsigned tahun;

};
	struct alamat
{
	char jalan[30];
   char kota[20];
};
	struct
{
   char nama[40];
   struct tgl masuk;
   struct alamat tinggal;
   float gaji;
}
	karyawan={"Yuni Chairun Nisa", 11, 06,2008," Jl.Kedondong 56 ","Lumajang",900000
};
	cout<<"\n\n             DATA KARYAWAN  \n";
   cout<<"\n====================================================\n\n";
   cout<<"Nama Karyawan  : "<<karyawan.nama<<"\n";
   cout<<"Tanggal Masuk  : "<<karyawan.masuk.hari <<karyawan.masuk.bulan<<karyawan.masuk.tahun<<"\n";
   cout<<"Alamt          : "<<karyawan.tinggal.jalan <<karyawan.tinggal.kota<<"\n";
   cout<<"Gaji per Bulan : Rp  " <<karyawan.gaji;


 getch();

}

