#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[100000]={};
    int b[100000]={};
    int tmp;
    int now=0;
    bool in=false;
    while (cin>>tmp){
        for (int i=0;i<now;i++){
            if (a[i]==tmp){
                b[a[i]]++;
                in=true;
            }
        }
        if (!in) {
            a[now]=tmp;
            b[a[now]]++;
            now++;
        }
        in = false;
    }
    for (int i=0;i<now;i++){
        cout << a[i] << ' ' << b[a[i]] << '\n';
    }

    return 0;
}
