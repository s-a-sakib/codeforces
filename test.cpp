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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define np cout << -1 << endl
#define cout(a) cout << a << endl
#define rn return
using namespace std;
 
int dx[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy[]={1, -1, 0, 0, 1, -1, 1, -1};

string printBinary(int number){
    std::bitset<CHAR_BIT * sizeof(number)> binary(number);
    std::string binaryString = binary.to_string();
    
    size_t firstNonZero = binaryString.find_first_not_of('0');
    if (firstNonZero != std::string::npos) {
        binaryString = binaryString.substr(firstNonZero);
    } else {
        binaryString = "0";  // If the number is 0, set binaryString to "0"
    }
    return binaryString;
}
void solve(){
    int a , b , c;
    cin >> a >> b >> c;
    if(a + b >= 10){
        yes;
        rn;
    }
    if(a + c >= 10){
        yes;
        rn;
    }
    if(b + c >= 10){
        yes;
        rn;
    }
    no; rn;
}
        
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
    int cases = 1;
    cin >> cases;
    while(cases--) solve();
    return 0;
}
