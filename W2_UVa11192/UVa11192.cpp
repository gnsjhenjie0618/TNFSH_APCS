#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string a;
    string b;
    int now=0;
    int c;
    while (cin >> n){
        if (n==0){
            return 0;
        }
        cin >> a;
        c=a.length()/n;

        for (int i=0;i<n;i++){
            b = a.substr(now,c);
            reverse(b.begin(),b.end());
            cout << b ;
            now+=c;

        }
        a.clear();
        cout << '\n';
        now=0;
    }
}
