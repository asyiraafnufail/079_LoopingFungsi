#include <iostream>
using namespace std;

int main(){
    char pilihan;

    do{
        cout << "Berangkat ambil takjil" << endl;
        cout << "Antri takji;" << endl;
        cout << "Apakah takjil masih ada?" << endl;
        cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}