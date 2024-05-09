#include <iostream>

using namespace std;

int main()
{
    int numbers[5]; // Mảng lưu trữ 5 số nguyên
    int *ptrs[5];   // Mảng chứa các con trỏ tới các phần tử của mảng numbers

    // Nhập vào 5 số nguyên từ người dùng
    cout << "Nhap vao 5 so nguyen:\n";
    for (int i = 0; i < 5; ++i)
    {
        cout << "So thu " << i + 1 << ": ";
        cin >> numbers[i];     // Nhập số nguyên vào mảng numbers
        ptrs[i] = &numbers[i]; // Lưu địa chỉ của từng phần tử vào mảng con trỏ
    }

    // In các số theo thứ tự ngược với thứ tự nhập
    cout << "\nCac so theo thu tu nguoc lai voi thu tu nhap:\n";
    for (int i = 4; i >= 0; --i)
    {
        cout << *ptrs[i] << " "; // In giá trị của từng phần tử theo thứ tự ngược từ mảng con trỏ
    }
    cout << endl;

    return 0;
}
