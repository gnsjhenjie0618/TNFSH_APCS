#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b;
    while (cin >> a >> b){
        if (a<b){
            cout  << b-a << '\n';
        }else{
            cout << a-b  << '\n';
        }
    }
    return 0;
}
