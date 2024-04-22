#include <iostream>

using namespace std;

// Ham kiem tra ki tu
void kiemTraKiTu(char kiTu) {
    if ((kiTu >= 'A' && kiTu <= 'Z'))
        cout << kiTu << " la chu hoa." << endl;
    else if ((kiTu >= 'a' && kiTu <= 'z'))
        cout << kiTu << " la chu thuong." << endl;
    else
        cout << kiTu << " khong phai la chu cai." << endl;
}

int main() {
    char kiTu;

    cout << "Nhap vao mot ki tu: ";
    cin >> kiTu;

    kiemTraKiTu(kiTu);

    return 0;
}

