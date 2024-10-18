#include <iostream>
using namespace std;

int main() {
    int n, searchValue;

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Mencari nilai tertinggi
    int maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    cout << "Nilai tertinggi dalam array: " << maxValue << endl;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> searchValue;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            cout << "Angka " << searchValue << " ditemukan pada indeks: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Angka " << searchValue << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
