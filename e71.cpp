#include <bits/stdc++.h>
using namespace std;

void ex87(){
    long long S = 0;
    int index = 0;
    while(S<=10000){
        index++;
        S+=index;
    }
    cout << index << endl;
}

void ex88(){
    for(char i='A';i<='Z';i++){
        cout << i << endl;
    }
}

void ex89(){
    long long s = 0;
    int n; cin >>n;
    for(int i = 0; i < n; i++) {
        if(i%2!=0)
            s+=i;
    }
    cout << s << endl;
}
void ex90(){
    long long s=0;
    int i=0;
    int n; cin >> n;
    while(s<=n){
        i++;
        s+=i;
    }
    cout << i-1 << endl;
}

void ex59(){
    int n; cin >> n;
    int k=0;
    int tmp=n;
    while(n){
        k=k*10+n%10;
        n/=10;
    }
    cout << k << endl;
    if(k==tmp){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

void ex60(){
    int n; cin>>n;
    while(n/10){
        int firstNumber=n%10;
        n/=10;
        if(n%10>=firstNumber){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void ex61(){
    int n; cin>>n;
    while(n/10){
        int firstNumber=n%10;
        n/=10;
        if(n%10<firstNumber){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
long long gt(int n){
    long long gt =1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return gt;
}
void ex113(int x){
    double S = 0;
    int n; cin >>n;
    for(int i = 0; i <= n; i++) {
        S+=pow(-1,i)*pow(x,2*i+1)/(gt(2*i+1));
    }
    cout << S;
}

void ex111a(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i * 2 - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void ex111b(int n){
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++) 
        {
            cout << "  ";
        }
        for(int j = 1;j <= i*2-1; j++)
        {
            if(i == 1|i ==n||j == 1||j== 2*i-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
    cout << endl;
    }
}

void ex111c(int n){
    for(int i=1; i<=n;i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// void ex111d(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=n;j++){
//             if(i==0||i=n-1||j=0||j=n-1){
//                 cout<<"* ";
//             }
//         }
//         cout << endl;
//     }
// }

void ex112a(int n){
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
              cout << "* ";
        }
        cout << endl;
    }
}

void ex112b(int n){
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
               cout << "* ";
            }
            else{
                cout << " ";
            }   
        }
        cout << endl;
    }
}

void ex115(){
    string fullOfName;
    getline(cin, fullOfName);
    float markMath;
    float markLiterature;
    cin >> markMath;
    cin >> markLiterature;
    cout << fullOfName << endl;
    cout <<"Average: "<< (markMath+markLiterature)/2 << endl;
}

void ex116(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;
}

void ex117(int n){
    int x; cin >> x;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow(x,i);
    }
    cout << sum <<  endl;
}

bool isPrimeNumber(int n){
    for(int i = 2; i <= sqrt(n); i++) {
        if(!(n % i)) return false;
    }
    return n >= 2;
}

void ex119(int n){
    for(int i=2;i<=n;i++){ //n
        if(isPrimeNumber(i)){ //log(n)
            cout << i << endl;
        }
    }
}

void ex120(int n){
    int i=1;
    while(i*i<=n){
        cout << i*i << endl;
        i++;
    } 
}


void ex82(){
    int a, b, c;
    cin >> a >> b >> c;
    int max=a;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    cout << max << endl;
}

bool ex83(int a, int b){
    return a*b > 0; 
}

void ex86(int n){
    float S=0;
    for(int i=1;i<=n;i++){
        S+=i*i*i;
    }
    cout << S << endl;
}

void ex91(){
    int n; cin >> n;
    float S=0;
    for(int i = 1; i <= n ; i+=2){
        if(n<100){
            cout << i << " ";
        }
    }
}

void ex92(){
    int a, b;
    cout <<  __gcd(a,b) << endl;
}

void ex93(int n){
    if(isPrimeNumber(n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void ex94(){
    int n; cin >> n;
    float S=0;
    for(int i = 1; i <= n ; i+=2){
        if(n<100){
            cout << i << " ";
        }
        else if(i==5||i==7||i==93){
            cout << "NO";
        }
    }
}

void ex95(){
    int a,b,c;
    cin >> a >> b >> c;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    cout << a <<" "<< b << " "<< c << endl;
}

void ex96(){
    int x; cin >> x;
    if(x>=5){
        cout << 2*x*x + 5*x + 9 << endl;
    }
    else{
        cout << -2*x*x + 4*x - 9 << endl;
    }
}

void ex97(){
    int a, b, c; cin >> a >> b >> c;
    if((a+b)>c && (a + c) > b && (b + c) > a) {
        cout << "a,b,c là 3 cạnh của một tam giác"<<endl;
        if((a==b)||b==c||a==c){
            cout << "a,b,c là tam giác cân" << endl;
        }
        else if((a==b)&&(a==c)&&(b==c)){
            cout << "a,b,c là tam giác đều" <<endl;
        }
        else if((a*a==b*b+c*c)|| (b*b==a*a+c*c)||(c*c==b*b+a*a)){
            if(((a*a==b*b+c*c)&&(b==c))||((b*b==a*a+c*c)&&(a==c))||((c*c==b*b+a*a)&&(a==b))){
                cout << "a,b,c là tam giác vuông cân" << endl;
            }else 
                cout << "a,b,c là tam giác vuông" <<endl;
        }
    }else{
        cout << "a,b,c không phải là cạnh của một tam giác" <<endl;
    }
}

void ex98(){
    int a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    float D, Dx, Dy;
    cin >> D >> Dx >> Dy;
    D = a1*b2-a2*b1;
    Dx = c1*b2 - c2*b1;
    Dy = a1*c2 - a2*c1;
    if(Dx+Dy==0){
        cout << "Phương trình có vô số nghiệm!!" << endl;
    }else if(Dx+Dy!=0){
        cout << "Phương trình vô nghiệm!!";
    }else if(D!=0){
        float x=Dx/D;
        float y=Dy/D;
        cout << x << y << endl;
    }  
}


void ex108(){
    long long S;
    int x, y;
    S=pow(x,y);
    cout << S << endl;
}

void ex109(){
    for(int i =2; i<=10;i++){
        for(int j=1; j<=10; j++){
            cout <<i<<"x"<<j <<"="<< i*j << endl;
        }
    }
}

void ex122(int a[], int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(a[i] > max)
        max = a[i];
    }
    cout << max << endl;
}

void ex67(int n){
    int x; cin >> x;
    float S = 0;
    for(int i = 1; i <= n; i++ ){
        S+= pow(-1,i+1)*pow(x,i);
    }
    cout << S << endl;
}

void ex68(int n){
    int x; cin >> x;
    float s = 0;
    for(int i = 1; i <= n; i++ ){
        s+= pow(-1,i)*pow(x,2*i);
    }
    cout << s << endl;
}

void ex69(int n){
    int x; cin >> x;
    float s = 0;
    for(int i = 1; i <= n; i++ ){
        s+= pow(-1,i)*pow(x,2*i+1);
    }
    cout << s << endl;
}

void ex70(int n){
    int x; cin >>x;
    float s = 0;
    float sum=0;
    for(int i = 1; i <= n; i++ ){
        sum+=i;
        s+= pow(-1,i+1)*pow(sum, -1);
    }
    cout << s << endl;
}

void ex71(int n){
    int x; cin >>x;
    float s = 0;
    float sum=0;
    for(int i = 1; i <= n; i++ ){
        sum+=i;
        s+= pow(-1,i)*pow(x,i)*pow(sum, -1);
    }
    cout << s << endl;
}

void ex72(int n){
    int x; cin >> x;
    float p = 1;
    float s = 0;
    for(int i = 1; i <= n; i++){
        p*=i;
        s+= s+= pow(-1,i)*pow(x,i)*pow(p,-1);
    }
    cout  << s << endl;
}

void ex73(int n){
    int x; cin >> x;
    float p = 1;
    float s = 0;
    for(int i = 0; i <= 2*n; i++){
        p*=i;
        if(i%2==0){
            s+=pow(-1,i+1)*pow(x,i)*pow(p,-1);
        }
    }
    cout  << s << endl;
}

void ex74(int n){
    int x; cin >> x;
    float p = 1;
    float s = 0;
    for(int i = 0; i <= 2*n+1; i++){
        p*=i;
        if(i%2!=0){
            s+=pow(-1,i+1)*pow(x,i)*pow(p,-1);
        }
    }
    cout  << s << endl;
}

void ex85(){
    int month; cin >> month;
    switch(month){
        case 1:
            cout << "Quý 1" << endl;
            break;
        case 2:
            cout << "Quý 1" << endl;
            break;
        case 3:
            cout << "Quý 1" << endl;
            break;
        case 4:
            cout << "Quý 2" << endl;
            break;
        case 5:
            cout << "Quý 2" << endl;
            break;
        case 6:
            cout << "Quý 2" << endl;
            break;
        case 7:
            cout << "Quý 3" << endl;
            break;
        case 8:
            cout << "Quý 3" << endl;
            break;
        case 9:
            cout << "Quý 3" << endl;
            break;
        case 10:
            cout << "Quý 4" << endl;
            break;
        case 11:
            cout << "Quý 4" << endl;
            break;
        case 12:
            cout << "Quý 4" << endl;
            break;
    }
}

void ex99(){
    int a, b, c; cin >> a >> b >> c;
    if(a > b){
        swap(a, b);
    }
    if(a > c){
        swap(a, c);
    }
    if(b > c){
        swap(b, c);
    }
    cout << a << " " << b << " " << c ;
}

void ex107(){
    int n; cin >> n;
    int x; cin >> x;
    double s = pow(x, 1.0/n);
    cout << s << endl;
}

void ex110(){
    int initialMoney = 8000;
    int num = 0;
    num = initialMoney / 5000;
    cout << "5000 has: " << num << endl;
    initialMoney -= num*5000;
    num = initialMoney / 2000;
    cout << "2000 has: " << num << endl;
    initialMoney -= num*2000;
    num = initialMoney / 1000;
    cout << "1000 has: " << num << endl;
}

void ex121(int n){
    int total = 0, temp = n, powerNumber = 0;
    while(n) {
        ++powerNumber;
        n /= 10;
    }
    n = temp;
    while(n) {
        total += pow(n % 10, powerNumber);
        cout << "" << pow(n % 10, powerNumber) << endl;
        n /= 10;
    }
    if(temp == total) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

void ex122(){
    int n; cin >> n;
    int arr[10];
    for(int i=0;i<=n;i++){
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i=1;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << "Max is: " << max << endl;
}


int main() {
    //ex110();
    //ex99();
    //ex67-74();
    //ex87();
    //ex88();
    //ex89();
    //ex90();
    //ex59();
    //ex60();
    //ex61();
    //ex113(2);
    //ex111a(5);
    //ex111b(5);
    //ex111c(5); 
    //ex111d(5);
    //ex112a(5);
    //ex112b(5);
    //ex115();
    //ex116(3);
    //ex117(3);
    //ex119(40);
    //ex82();
    //ex120(17);
    //ex83(5,3);
    //ex85();
    //ex86(3);
    //ex91();
    //ex92();
    //ex93(5);
    //ex94();
    //ex95();
    //ex96();
    //ex97();
    //ex98();
    //ex107();
    //ex108();
    //ex109();
    //ex121(153);
    //ex122();
    return 0;
}