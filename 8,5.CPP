#include <iostream.h>

int bil,panjang,pangkat;
int perpangkatan();

int main()
	{ 	cout<<"masukkan bilangan yang akan dipangkatkan : ";
   	cin>>bil;
      cout<<"masukkan pangkat dari bilangan tersebut : ";
      cin>>pangkat;
      cout<<"hasilnya adalah : "<<perpangkatan();
      return (0);
   }

int perpangkatan ()
	{ 	int i, hasil=1;
   	if (pangkat < 0)
      	hasil=0;
      else
      	{	for (i=0; i<pangkat; i++)
         		hasil *=bil;
         }
      return (hasil);
}
