#include <iostream>
using namespace std;

int main() {
    char repeat;
    do {
        cout << "Silahkan pilih (1-3) jumlah uang yang akan anda ambil:" << endl;
        cout << "1. 100.000" << endl;
        cout << "2. 250.000" << endl;
        cout << "3. 500.000" << endl;

        int choice;
        cout << "Pilihan: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Silahkan ambil uang 100.000 anda" << endl;
        } else if (choice == 2) {
            cout << "Silahkan ambil uang 250.000 anda" << endl;
        } else if (choice == 3) {
            cout << "Silahkan ambil uang 500.000 anda" << endl;
        } else {
            // Jika input tidak valid
            cout << "Nominal yang kamu pilih tidak ada" << endl;
        }

        cout << "Apakah anda ingin melakukan transaksi lagi (Y/N): ";
        cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');

    cout << "Terima kasih telah menggunakan ATM ini." << endl;

    return 0;
}
