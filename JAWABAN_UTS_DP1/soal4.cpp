#include <iostream>
#include <string>
using namespace std;

int main() {
    string mantra;
    int i = 0;
    int vokal = 0;

    cout << "Masukkan mantra: ";
    cin >> mantra;

    while (i < mantra.length()) 
    {
        char huruf = tolower(mantra[i]); 

        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') 
        {
            vokal++;
        }

        i++;
    }

    if (vokal > 0) 
    {
        cout << "Kekuatan mantra: " << vokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }
}