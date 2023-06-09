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
#define rn return
using namespace std;
 
int dx[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy[]={1, -1, 0, 0, 1, -1, 1, -1};


void solve(){
    map < char , int > m;
    int c = 0;
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++) m[s[i]]++;
    for(auto [x , y] : m){
        if(y >= 2) c++;
        if(c == 2){
            yes; 
            m.clear();
            rn;
        }
    }
    m.clear();
    no;
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
