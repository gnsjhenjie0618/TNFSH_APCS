#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    int now=0;
    int ans=0;
    while(getline(cin,a)){
        if (a[0]=='*'){
            return 0;
        }
        for (int i=0;i<a.size();i++){
            if (a[i]=='/'){
                if (now==64){
                    ans++;
                }
                now=0;
            }else if (a[i]=='W'){
                now+=64;
            }else if (a[i]=='H'){
                now+=32;
            }else if (a[i]=='Q') {
                now+=16;
            }else if (a[i]=='E'){
                now+=8;
            }else if (a[i]=='S'){
                now+=4;
            }else if (a[i]=='T'){
                now+=2;
            }else if (a[i]=='X'){
                now+=1;
            }
        }
        cout << ans <<'\n';
        ans = 0;
    }
    return 0;
}
