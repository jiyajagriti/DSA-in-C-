#include<iostream>
using namespace std;

bool printcounting(int num){

    for( int i = 1; i <= num; i++){

        cout << i << " " << endl;

    }
}

int main(){
    int n;
    cin >> n;

    cout << printcounting(n) << endl;
}