#include<iostream>
using namespace std;
bool isEven(int a){
    

    if(a&1){

        return 0;

    }
    else{
        
        return 1;
    }

}


int main(){
    int a;

    cout << "enter a number: " << endl;
    cin >> a;

    if(isEven(a)){

        cout << "no is even" << endl;

    }

    cout << "no is odd" << endl;
}