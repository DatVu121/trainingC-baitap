#include <iostream>

using namespace std;

// Hàm đổi chỗ hai số sử dụng con trỏ
void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1; // Lưu giá trị của ptr1 vào biến tạm thời temp
    *ptr1 = *ptr2;    // Gán giá trị của ptr2 cho ptr1
    *ptr2 = temp;     // Gán giá trị của temp cho ptr2
}

int main() {
    int num1, num2;

    // Nhập hai số từ người dùng
    cout << "Nhap so thu nhat: ";
    cin >> num1;
    cout << "Nhap so thu hai: ";
    cin >> num2;

    cout << "Truoc khi doi cho:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Gọi hàm swap để đổi chỗ hai số bằng cách truyền con trỏ đến hai số này
    swap(&num1, &num2);

    cout << "Sau khi doi cho:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
