#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    float S=1;
    for(int i=1;i<=n;i++){
        S*=i;
    }
    cout << S << endl;
}