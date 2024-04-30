#include <iostream>

using namespace std;

int main()
{
    int n, reverseNumber = 0, remainder;

    cout << "Nhap vao mot so nguyen: ";
    cin >> n;

    int originalNumber = n;

    // Tinh so viet theo thu tu nguoc lai
    while (n != 0)
    {
        remainder = n % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        n /= 10;
    }

    cout << "So " << originalNumber << " viet theo thu tu nguoc lai la: " << reverseNumber << endl;

    return 0;
}
