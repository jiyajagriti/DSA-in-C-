#include<iostream>
using namespace std;
int main(){

    int a, b;
    cout << "enter a number 'a' : " << endl;
    cin >> a;

    cout << "enter a number 'b' :" << endl;
    cin >> b;

    char op;
    cout << "enter an operator you want to perform: " << endl;
    cin >> op;

    switch ( op ){
        case '+': cout << a+b << endl;
                   break;
        case '-': cout << a-b << endl;
                    break; 
        case '*': cout << a*b << endl;
                    break;
        case '/': cout << a/b << endl;
                    break;
        case '%': cout << a%b << endl;
                    break;
        default: cout << "enter a valid operator:" << endl; 
        
    }
}