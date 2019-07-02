#include<iostream.h>
#include<conio.h>



struct koordinat
{
	int x;
   int y;
};
	void ubah_posisi(koordinat *posisi);
   void main()

{
	koordinat posisi;
   posisi.x = 10;
   posisi.y = 30;
   cout<<"isi semula : x = "<<posisi.x<<"Y  = " <<posisi.y<<endl;
   ubah_posisi(&posisi);
   cout<<"isi sekarang : x = "<<posisi.x<<"Y = " <<posisi.y<<endl;
}

	void ubah_posisi(koordinat *posisi)
   {
   (*posisi).x = 100;
   (*posisi).x = 300;




 getch();

 }