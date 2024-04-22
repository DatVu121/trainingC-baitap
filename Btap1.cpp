#include <iostream>
#include <cmath>
using namespace std;

// Ham giai PT bac hai
void giaiPTBacHai(float a, float b, float c){
	float delta = b * b - 4 * a * c;
	float x1, x2; 
	
	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Phuong trinh co 2 nghiem phan biet la: " << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	} else if ( delta == 0) {
		x1 = x2 = -b / (2 * a);
		cout << "Phuong trinh co nghiem kep la: " << endl;
		cout << " x1 = x2 = " << x1  << endl;
	}else {
		cout << "Phuong trinh vo nghiem" << endl;
	}
}

int main() {
	float a , b , c;
	
	cout << " Nhap he so a, b, c cua phuong trinh: ";
	cin >> a >> b >> c;
	
	if ( a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh co vo so nghiem." << endl;
			} else {
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}else {
			cout << "Phuong trinh co mot nghiem la: " << endl;
			cout << "x = " << -c / b << endl;
		}
	}else {
		giaiPTBacHai(a, b, c);
	}
	
	return 0;
}
