#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    cout << "Cac uoc so cua " << n <<" la: ";
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i <<" ";
        }
    }
}
