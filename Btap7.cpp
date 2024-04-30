#include <iostream>

using namespace std;

// Hàm sắp xếp mảng theo thứ tự tăng dần
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // So sánh hai phần tử liền kề và hoán đổi chúng nếu cần
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 2, 8, 1, 3};          // Mảng các số
    int n = sizeof(arr) / sizeof(arr[0]); // Số lượng phần tử trong mảng

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Gọi hàm sắp xếp
    bubbleSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
