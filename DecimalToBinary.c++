#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    int i=0;
    int ans=0;

    while(n!=0)
    {
        int digit = n&1;
        ans = (digit * pow(10,i) + ans);
        i++;

        n=n>>1;
    }
    cout<<"answer is: "<<ans;
}