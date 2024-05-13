#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter any amount: " << endl;
    cin >> n;

    int note100;
    int note20;
    int note10;
    int note1;

    switch( 1 )
    {
        case 1:
            if(n>=100){
                note100=n/100;
                n=n%100;
            }

            else{
                note100 = 0;
            }

            cout << "Rs 100 note required: " << note100 << endl;

        case 2:
            if(n>=20){
                note20=n/20;
                n=n%20;
            }

            else{
                note20=0;
            }
            cout << "no. of Rs 20 note required: " << note20 << endl;

        case 3:
            if(n>=10){
                note10=n/10;
                n=n%10;
            }

            else{
                note10=0;
            }
            cout << "no. of Rs10 notes required: " << note10 << endl;

        case 4:
            if(n>=1){
                note1=n/1;
                n=n%1;
            }

            else{
                note1=0;
            }
            cout << "no. of 1 rupee coins required: " << note1 << endl;
            break;
    }
}