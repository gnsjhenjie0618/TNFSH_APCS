#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,f,n;
    int a=0;
    cin >> n ;
    while (a<n && cin >> c >> f){
        a++;
        cout << "Case " << a << ": " << fixed << setprecision(2) << c + f/1.8 << '\n';
    }
    return 0;
}
