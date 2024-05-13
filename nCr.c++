#include<iostream>
using namespace std;

int factorial(int a){

    int fact = 1;

    for(int i=1; i<=a; i++){

        fact = fact * i;
    }

    return fact;

}

int nCr(int n, int r){

    int num = factorial(n);

    int denom = factorial(n) * factorial(n-r);

    return num/denom;


}

int main(){

    int n, r;
    cout << "Enter n: " << endl;
    cin >> n;

    cout << "Enter r: " << endl;
    cin >> r;

    cout << "Answer is: " << nCr(n,r) << endl;

}