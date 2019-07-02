#include<iostream.h>
#include<conio.h>


void main()
{
struct data_tanggal
{
	int tanggal;
   int bulan;
   int tahun;

};
	data_tanggal tgl1,tgl2;
   tgl1.tanggal = 1;
   tgl1.bulan = 9;
   tgl1.tahun = 1979;
   tgl2= tgl1;

   cout<<tgl1.tanggal <<"/"<<tgl1.bulan<<"/"<<tgl1.tahun<<endl;




 getch();

 }
