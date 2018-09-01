#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    while (getline(cin,a)){
        for (int i=0;i<a.size();i++){
            cout << (char)(a[i]-7);
        }
        cout << '\n';
    }
    return 0;
}
