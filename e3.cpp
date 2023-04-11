#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    float S=0;
    for(int i=1;i<=n;i++){
        S+=(float)1/i;
    }
    cout << S << endl;
}