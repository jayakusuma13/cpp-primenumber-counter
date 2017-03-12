// NIM/Nama : 16416303 / M. Qodir Ibrahim Jayakusuma
// Nama file : PB03-16416303-170312-02.cpp
// Tanggal : 12-03-2017
// Deskripsi : penghitung angka prima


#include <iostream>
using namespace std;
//deklarasi variabel
    int x,y;

    //fungsi
    int prima(int x, int y){
        int i,j,a,b;

        //a sebagai bilangan akhir dan b sebagai bilangan awal
        if(x>y){
            a = x;
            b = y;
        }else{
            a = y;
            b = x;
        };

        //looping untuk cek bilangan prima
        for(i=b;i<=a;i++){
            for(j=2;j<i;j++){
            if(i%j == 0){
            break;
            }else{
                cout << i << endl;
                break;
            };

            };
        };

    };

int main(){

    //input
    cout << "input nilai A: ";
    cin >> x;
    cout << "input nilai B: ";
    cin >> y;

    //penggunaan fungsi
    prima(x,y);


return 0;
}
