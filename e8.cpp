#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    float S=0;
    for(int i=1;i<=n;i++){
        S+=(2*i+1)/(2*i+2);
    }
    cout << S << endl;
}