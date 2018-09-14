#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,d;
    while (cin >> a >>b){
        if (a == -1){  //a == -1 代表輸入結束
            return 0;
        }
        d = abs(a-b);  //計算a和b差距d
        if (d>50){    //d>50輸出另一較小解100-d
            cout << 100-d << '\n';
        }else{
            cout << d << '\n';  //d<=49即最小解，直接輸出
        }
    }

}
