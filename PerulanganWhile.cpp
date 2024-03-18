#include <iostream>
using namespace std;

int main(){
    int bilangan;

    srand(time(0));

    bilangan = rand() % 12;

    while(bilangan % 2){
        cout << "bilangan" << endl;
        cout << "maka bilangannya genap" << endl;

        bilangan = rand() % 12;
    
    }
}