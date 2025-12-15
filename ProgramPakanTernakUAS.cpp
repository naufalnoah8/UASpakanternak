#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlahTernak;
    string nama[2] = {"sapi", "kambing"};

        cout << "1. Sapi\n";
        cout << "2. Kambing\n";
        cout << "Pilih jenis ternak (1-2): ";
        cin >> pilihan;

        
        if (pilihan < 1 || pilihan > 2) {
            cout << "Pilihan tidak valid!\n";
        }
        
        cout << "Masukkan jumlah ternak: ";
        cin >> jumlahTernak;
    for (int pilihan = 1; pilihan <= jumlahTernak; pilihan++) {
        int pakanPagi, pakanSore;

        cout << "\n=== Ternak ke-" << pilihan << " ===\n";
        
        // Input nama ternak
        int index = pilihan - 1;
         
        // Input takaran pagi
        cout << "Takaran pakan pagi (kg): ";
        cin >> pakanPagi;

        // Input takaran sore
        cout << "Takaran pakan sore (kg): ";
        cin >> pakanSore;

        // Validasi untuk mencegah takaran 0 atau negatif
        if (pakanPagi <= 0 || pakanSore <= 0) {
            cout << "Takaran tidak boleh 0 atau negatif, ternak ini dilewati.\n";
            continue;  // LEWATI ternak ini, lanjut ke ternak berikutnya
        }

        // Menampilkan hasil
        cout << "\n--- Jadwal Pemberian Pakan " << nama << " ---\n";
        cout << "Pagi : " << pakanPagi << " kg\n";
        cout << "Sore : " << pakanSore << " kg\n";
    }

    return 0;
}

