#include<iostream>
using namespace std;
int power(int a, int b){

    int ans=1;

    for(int i = 1; i <= b ;i ++ ){
        ans = ans * a;
    }
    
    return ans;
}

int main(){

    int a,b;

    cout << "Enter a number: " << endl;
    cin >> a;

    cout << "Enter its power: " << endl;
    cin >> b;



    cout << "Answer is: " << power(a,b) << endl;
}