#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n;       // membuat variabel inputan n

void input()
{ // prosedur input
    while (true)
    {
        cout << "Masukkan jumlah data pada array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray tidak boleh lebih dari 20\n";
        }
    }

    cout << endl;
    cout << "===============================================";
    cout << "=============Masukkan elemen Array=============";
    cout << "===============================================";

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}