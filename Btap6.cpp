#include <iostream>

using namespace std;

// Định nghĩa hàm đệ quy để tính giai thừa
int factorial(int n) {
    // Trường hợp cơ bản: nếu n = 0 hoặc n = 1, giai thừa là 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Trường hợp đệ quy: nếu n > 1, tính giai thừa của n-1 và nhân với n
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    // Kiểm tra nếu n âm, không thể tính giai thừa
    if (n < 0) {
        cout << "Khong the tinh giai thua cua so am.";
    } 
    else {
        // Gọi hàm factorial để tính giai thừa của n và in ra kết quả
        cout << "n! = " << factorial(n);
    }

    return 0;
}
