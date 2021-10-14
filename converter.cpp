#include <iostream>

using namespace std;

void decToOctal(int n) {

    // counter for octal number array
    int i = 1, octal = 0;
    //Konversi desimal ke oktal
    while (n != 0)
    {
        int sisa = n % 8;
        n = n / 8;
        octal = octal + sisa * i;
        i = i * 10;
    }

    // printing octal number array in reverse order
    cout << "\nHASIL KONVERSI KE OKTAL = " << octal;
}

void decToBinary(int n) {
    int i = 1, binary = 0;
    //Konversi desimal ke biner
    while (n != 0)
    {
        int sisa = n % 2;
        n = n / 2;
        binary = binary + sisa * i;
        i = i * 10;
    }
    // printing binary number array in reverse order
    cout << "\nHASIL KONVERSI KE BINER = " << binary;
}

void decToHex(int n) {
    //Konversi desimal ke heksadesimal
    int j;
    string hexdec_num = "";
    char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    while (n != 0)
    {
        j = n % 16;
        hexdec_num = hex[j] + hexdec_num;
        n = n / 16;
    }
    cout << "\nHASIL KONVERSI KE HEKSADESIMAL = " << hexdec_num << "\n";
}

int main() {
    bool quit = false;
    while (!quit) {
        int n;
        int option;
        cout << "Masukkan nilai yang akan di konversi: ";
        cin >> n;


        decToOctal(n);
        decToBinary(n);
        decToHex(n);

        cout << "Apakah anda ingin memasukkan input baru? [1 = Ya; 2 = Keluar] : ";
        cin >> option;
        if (option == 2) {
            quit = true;
        }
    }
}
