#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

int panjang, lebar;

void input();

void Luas()
{
	int ls;
   ls = panjang * lebar;
   cout<<"Luasnya adalah : "<<ls;
}

void Keliling()
{
	int kl;
   kl = (2*panjang)+ (2*lebar);
   cout<<"Kelilingnya adalah : "<<kl;
}

void Diagonal()
{
	float dg;
   dg =((panjang*panjang)+(lebar*lebar));
   cout<<"Diagonalnya adalah : "<<dg;
}

void main()
{
	int pilih;
   do
   	{
        clrscr();
        cout<<"pilihlah ------> " <<endl;
        cout<<"1.  Luas Persegi Panjang \n";
        cout<<"2.  Keliling Persegi Panjang \n";
        cout<<"3.  Diagonal Persegi Panjang \n";
        cout<<"4.  SELESAI \n";
        cout<<"Masukkan Pilihan Anda : ";
        cin>>pilih;

        if (pilih =4)
        		input ();

        switch (pilih)
        {
          case 1 : Luas();
          			 break;
          case 2 : Keliling();
          			 break;
          case 3 : Diagonal();
          			 break;
          case 4 : cout<<"Terima Kasih ..!";
        }
        getch();
      } while (pilih !=4);
   }

void input ()
{
	cout<<"Masukkan Nilai Panjang : ";
   cin>>panjang;
   cout<<"Masukkan Nilai Lebar : ";
   cin>>lebar;
   return;
}
