#include <iostream>
#include <string>

using namespace std;

// Hàm chuyển đổi số thập phân sang số nhị phân
string decimalToBinary(int decimal)
{
    if (decimal == 0)
    {
        return "0"; // Trường hợp đặc biệt: số thập phân là 0
    }

    string binary = "";
    while (decimal > 0)
    {
        binary = to_string(decimal % 2) + binary; // Lấy phần dư và thêm vào đầu chuỗi kết quả

        decimal /= 2;                             // Chia số thập phân cho 2 để lấy phần nguyên cho lần lặp tiếp theo
    }

    return binary;
}

int main()
{
    int decimalNumber;
    cout << "Nhap so thap phan: ";
    cin >> decimalNumber;

    string binaryNumber = decimalToBinary(decimalNumber);
    cout << "So nhi phan tuong ung: " << binaryNumber << endl;

    return 0;
}
