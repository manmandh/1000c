#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
    if (n<2){
        cout<<"NO";
    }
    else{
    int count = 0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0){
        count++;
        }
    }
        if(count==0){
            cout<<"YES"<<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}