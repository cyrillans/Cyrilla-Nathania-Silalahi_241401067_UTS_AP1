#include <iostream>
using namespace std;

int main()
{
    string nama, NIM, note1, note2, note3;
    int nilai1, nilai2, nilai3, rata2;

    cout << "Nama Mahasiswa: "; 
    cin >> nama;

    cout << "NIM: ";
    cin >> NIM;

    cout << "Nilai Mata Kuliah: " << endl;
    cout << "  Algoritma dan Pemprograman: "; cin >> nilai1;
    cout << "  Probabilitas dan Statistika: "; cin >> nilai2;
    cout << "  Sistem Operasi: "; cin >> nilai3;

    if (nilai1 < 60)
    {
        note1 = "Tidak Lulus. Silakan Ulangi di Tahun Depan!";
    }
    else
    {
        note1 = "Lulus";
    }

    if (nilai2 < 60)
    {
        note2 = "Tidak Lulus. Silakan Ulangi di Tahun Depan!";
    }
    else
    {
        note2 = "Lulus";
    }

    if (nilai3 < 60)
    {
        note3 = "Tidak Lulus. Silakan Ulangi di Tahun Depan!";
    }
    else
    {
        note3 = "Lulus";
    }

    rata2 = (nilai1 + nilai2 + nilai3) / 3;

    cout << "Algoritma dan Pemprograman: " << note1 << endl;
    cout << "Probabilitas dan Statistika: " << note2  << endl;
    cout << "Sistem Operasi: " << note3 << endl;
    cout << "Nilai Rata-rata Semester ini :" << rata2 << endl;
}