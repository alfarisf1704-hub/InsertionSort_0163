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

void insertionsort()
{ // prosedur insertionsort
    int temp;
    int j;

    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "\nStep" << i << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
    }
}

void display()
{
    cout << endl;
    cout << "\n======================";
    cout << "\nElement array" << endl;
    cout << "\n======================";

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }
    cout << endl;
}
