#include <iostream>
using namespace std;

int main() {
    string biner;
    int i = 0;
    int benar = 1;
    int desimal = 0;
    int pangkat = 1;

    cout << "Input kode biner: ";
    cin >> biner;

    while (biner[i] != '\0') 
    {
        if (biner[i] != '0' && biner[i] != '1') 
        {
            benar = 0; break;
        }
        else
        {
            i = i + 1;
        }
    }

    if (benar == 0) 
    {
        cout << "Pesan Rusak!" << endl;
    } 
    else 
    {
        int panjang = i;
        i = panjang - 1;

       
    while (i >= 0) 
    {
        if (biner[i] == '1')   
        {
            desimal = desimal + pangkat;
            }
            pangkat = pangkat * 2;
                 i = i - 1;
        }

        cout << "Angka desimal dari biner " << biner << " adalah = " << desimal << endl;
    }
}