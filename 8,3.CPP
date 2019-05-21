#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

double getRadius();
double square (double);

int main()
{
	const double PI = 3.14159;
   double rad;
//cout << fixed << shovpoint << setprecision(2);
   cout << "program ini untuk menghitung luas ligkaran.\n";
   rad = getRadius();
   cout << " luasnya adalah :  " << PI * square(rad) << endl;
   getch();
   return 0 ;
}

double getRadius()
{
	double radius;
   cout <<"masukan jari jari lingkaran: ";
   cin  >> radius;
   return radius;
}

double square (double number)
{
return number * number;
}
