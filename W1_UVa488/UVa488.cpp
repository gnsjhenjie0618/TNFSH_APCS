#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> b >> a;
        for (int l=0;l<a;l++){
            for (int j=0;j<b;j++){
                for (int k=0;k<j+1;k++){
                    cout << j+1;
                }
                cout << '\n';
            }
            for (int j=b-1;j>0;j--){
                for (int k=0;k<j;k++){
                    cout << j;
                }
                cout << '\n';
            }
            if ((i==n-1)&&(l==a-1)){

            }else{
                cout << '\n';
            }
        }
    }
    return 0;
}
