#include <iostream>
using namespace std;

    int x,y;

    int prima(int x, int y){
        int i,j,a,b;

        if(x>y){
            a = x;
            b = y;
        }else{
            a = y;
            b = x;
        };

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

    cout << "input nilai A: ";
    cin >> x;
    cout << "input nilai B: ";
    cin >> y;

    prima(x,y);


return 0;
}
