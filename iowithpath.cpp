#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //deklarasi variabel baris dan namafile
    string baris, NamaFile;

    //membuat file dalam mode menulis
    ofstream outfile;

    //menunjuk ke sebuah nama file dengan ekstensi txt
    outfile.open("ContohFile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis isi file
    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //kondisi jika baris hanya berisi huruf q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari variabelbaris ke dalam file
        outfile << baris << endl;
    }
    //menutup file apabila telah selesai ditulis
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;

    //menunjuk ke sebuah file dengan ekstensi txt
    infile.open(NamaFile + ".txt", ios :: in);

    cout << endl << ">= Membuka dan membaca file" << endl;

    //kondisi jika file ada
    if (infile.is_open()) {
        //looping untuk membaca isi file
        while (getline(infile, baris)) {
            cout << baris << endl;
        }
        //menutup file apabila telah selesai dibaca
        infile.close();
    }

    //kondisi jika file tidak ada
    else cout << "Unable to open file" << endl;
    return 0;
}