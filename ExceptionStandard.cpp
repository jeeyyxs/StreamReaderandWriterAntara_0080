#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main () {
    cout << "Awal Program" << endl; //penanda 1
    try
    {
        //deklarasi array data dengan panjang index 3
        array <int, 3> data = { 1, 2, 3};
        //memanggil array element ke-5 yang berarti akan terjadi error
        cout << data.at(3) << endl;
    }
    //kondisi jika terjadi error
    catch (exception& e)
    {
        cout << e.what() << endl; //menampilkan error
    }
    
}