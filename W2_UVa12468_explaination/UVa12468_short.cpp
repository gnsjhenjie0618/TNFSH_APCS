#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,d;
    while ((cin >> a >>b)&&(a!=-1)) cout << min(max(a,b)-min(a,b),100-max(a,b)+min(a,b))<<'\n';
}
