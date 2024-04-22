#include <iostream>

using namespace std;


int main() {
	int n, sum = 0;
	cout << "Nhap n: ";
	cin >> n;
	
	// Tinh tong so le tu 1 den n
	for(int i = 1; i <= n; i+= 2) {
			sum += i;
	}
	cout << "Tong so le tu 1 den " << n << " la: " << sum << endl;
	
	
	return 0;
}
