/*
 ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄    ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄  
▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌ 
▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░▌ ▐░▌  ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌
▐░▌          ▐░▌       ▐░▌▐░▌▐░▌       ▐░▌     ▐░▌       ▐░▌
▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░▌░▌        ▐░▌     ▐░█▄▄▄▄▄▄▄█░▌
▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌         ▐░▌     ▐░░░░░░░░░░▌ 
 ▀▀▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌░▌        ▐░▌     ▐░█▀▀▀▀▀▀▀█░▌
          ▐░▌▐░▌       ▐░▌▐░▌▐░▌       ▐░▌     ▐░▌       ▐░▌
 ▄▄▄▄▄▄▄▄▄█░▌▐░▌       ▐░▌▐░▌ ▐░▌  ▄▄▄▄█░█▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌
▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌ 
 ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀  ▀    ▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀  
*/
 
#include<bits/stdc++.h>
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define np cout << -1 << endl
#define rn return
#define cout(a) cout << a << endl
using namespace std;
 
int dx[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy[]={1, -1, 0, 0, 1, -1, 1, -1};
int mx = INT_MIN;
// int mn = INT_MAX;

/*binPow , findPrimeFactors , printBinary , sortbysec*/
//  ==============================================================================================
int binPow(int base , int exponent){int result = 1;while(exponent > 0){if (exponent % 2 == 1)base=
base * base;exponent = exponent / 2;}return result;}map <int , int> findPrimeFactors(int num){map<
int , int> result;while (num % 2 == 0) {result[2]++;num /= 2;}for (int i = 3; i * i <= num; i += 2)
{while (num % i == 0) {result[i]++;num /= i;}}if (num > 2) {result[num]++;}return result;}   string
printBinary(int number){std::bitset<CHAR_BIT * sizeof(number)> binary(number);          std::string 
binaryString = binary.to_string();size_t firstNonZero = binaryString.find_first_not_of('0');
if (firstNonZero != std::string::npos) {binaryString = binaryString.substr(firstNonZero);} else {
binaryString = "0";}return binaryString;} bool sortbysec(const pair<int,int> &a,const pair<int,int> 
&b){return (a.second < b.second);}
//  ==============================================================================================

void solve(){
    int n;
    cin >> n;
    map < int , int > m;
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        m[i] = a;
    }
    for(int i = 1; i <= n; i++){
        int cnt = 1;
        int temp = i;
        int next = m[temp];
        while(next != i){
            temp = next;
            next = m[temp];
            cnt++;
        }
        cout << cnt << " ";
    }
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
