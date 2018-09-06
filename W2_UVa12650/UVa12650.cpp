#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,R,temp;
    int i;
    bool everyone;
    string a;
    bool getback[10000]={false};
    while(cin >> n >>R){
        everyone=true;
        for (i=0;i<R;i++){
            cin >> temp;
            getback[temp-1] = true;
        }
        for (i=0;i<n;i++){
            if (getback[i]==false){
                cout << i+1 << ' ';
                everyone = false;
            }
            getback[i]=false;
        }
        //cout << 'n' << n << 'R' << R << '\n';
        if (everyone){
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
