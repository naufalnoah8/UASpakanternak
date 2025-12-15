#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int pilihan, jumlah_ternak, waktu;
    double berat, takaran_per_kg = 0.10;
    double total_pakan = 0;
    string nama_ternak, nama_waktu;
    char lanjut;

    do {
        cout << "\n=== PROGRAM PEMBERIAN PAKAN TERNAK BERDASARKAN WAKTU ===";
        cout << "\n= JENIS TERNAK =";
        cout << "\n1. Sapi\n2. Kambing";
        cout << "\nPilih jenis ternak (1-2): ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: nama_ternak = "Sapi"; break;
            case 2: nama_ternak = "Kambing"; break;
            default:
                cout << "Pilihan ternak tidak valid!\n";
                continue;
        }

        cout << "Berat badan per ekor (kg): ";
        cin >> berat;
        cout << "Jumlah ternak: ";
        cin >> jumlah_ternak;

        if (berat <= 0 || jumlah_ternak <= 0) {
            cout << "Input tidak valid!\n";
            continue;
        }

        
        cout << "\nWaktu pemberian pakan:";
        cout << "\n1. Pagi\n2. Sore";
        cout << "\nPilih waktu (1-2): ";
        cin >> waktu;

        switch(waktu) {
            case 1: nama_waktu = "Pagi"; break;
            case 2: nama_waktu = "Sore"; break;
            default:
                cout << "Pilihan waktu tidak valid!\n";
                continue;
        }

        double stok_pakan = 0;

        cout << "stok pakan Awal (kg): ";
        cin >> stok_pakan; 

        if ( stok_pakan < 0) {
            cout << "input tidak valid";
        }

        
        double pakan_harian = berat * takaran_per_kg * jumlah_ternak;

        
        double pakan_waktu_pagi = pakan_harian * 0.6;
        double pakan_waktu_sore = pakan_harian * 0.4;

        
        double sisa_stok_pakan;   

        cout << "\nJenis Ternak     : " << nama_ternak;
        cout << "\nWaktu            : " << nama_waktu;

        if (waktu == 1) { 
            sisa_stok_pakan = stok_pakan - pakan_waktu_pagi;
            cout << "\nTotal Pakan pagi : " << pakan_waktu_pagi << " kg";
            cout << "\nsisa stok pakan  : " << sisa_stok_pakan  << " kg";
            total_pakan += pakan_waktu_pagi;
            
        }
        else if (waktu == 2) { 
            sisa_stok_pakan = stok_pakan - pakan_waktu_sore;
            cout << "\nTotal Pakan sore : " << pakan_waktu_sore << " kg";
            cout << "\nSisa stok pakan  : " << sisa_stok_pakan  << " kg";
            total_pakan += pakan_waktu_sore;
            
        }

        

        cout << "\n-------------------------------------";
        cout << "\nLanjut input? (y/t): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
