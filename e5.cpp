#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    float S=0;
    for(int i=0;i<=n;i++){
        S+=(float)1/(2*i+1);
    }
    cout << S << endl;
}