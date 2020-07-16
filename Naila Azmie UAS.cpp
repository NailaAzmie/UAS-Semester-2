#include <iostream>
using namespace std;

void prototypeFunction ();
double double1, double2, double3, double4, double5;

int main ()
{
	prototypeFunction ();
}

void prototypeFunction ()
{
	cout << "STRUK PERBELANJAAN";
	cout << endl;
	
	cout << "Jumlah Barang yang di Beli : ";
	cin >> double1;
	cout << endl;
	
	cout << "Harga yang Harus di Bayar : ";
	cin >> double2;
	cout << endl;
	
	if (double2 >= 500000)
	{
		double3 = 0.1 * double2;
	} else {
		double3 = 0;
	}
	
	double4 = double2 - double3;
	cout << "Total Pembayaran setelah diskon : " << (double4) << endl << endl;
	
	cout << "Jumlah Uang yang di Bayarkan : ";
	cin >> double5;
	cout << endl;
	
	cout << "Jumlah Barang : " << (double1) << endl;
	cout << "Total Pembelian : " << (double2) << endl;
	cout << "Total Diskon :" << (double3) << endl;
	cout << "Total Uang : " << (double5) << endl;
	cout << "Jumlah Pembayaran : " << (double4) << endl;
	cout << "Jumlah Kembalian : " << (double5 - double4) << endl;
	
}
