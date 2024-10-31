#include <iostream>
using namespace std;

void hitungEK(float m, float v) {
	float ek = 0.5 * m * v * v;
	cout << "energi kinetik(ek) adalah : " << ek << " joule" << "\n";
}
int  main(){
	cout << "soal No 1" << endl;

	
		double massa;
		double kecepatan;
		cout << "masukan massa (dalam kg) : ";
		cin >> massa;
		cout << "masukan kecepatan (dalam m/s) : ";
		cin >> kecepatan;


		hitungEK(massa, kecepatan);
		return 0;
	
}
