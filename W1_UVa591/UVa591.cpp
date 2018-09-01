#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a[50];
    int sum;
    int ans;
    int no=0;
    while(cin >> n){
        no++;
        ans = 0;
        sum = 0;
        if (n==0){
            return 0;
        }
        sum = 0;
        ans = 0;
        for (int i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        sum = sum/n;
        for (int i=0;i<n;i++){
            if (a[i]>sum){
                ans+=a[i]-sum;
            }
        }
        cout << "Set #" << no << '\n' << "The minimum number of moves is "<< ans <<".\n\n";
    }

}
