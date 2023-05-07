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
    string s , prefix , postfix;
    char cherecter;
    cin >> s;
    int q , state = 0;
    cin >> q;
    while(q--){
        int Ti;
        cin >> Ti;
        if(Ti == 1) state = 1 - state;
        else{
            int Fi;
            cin >> Fi >> cherecter;
            if(state == 0){
                if(Fi == 1) s = cherecter + s;
                else s.push_back(cherecter);
            }else{
                if(Fi == 1) s.push_back(cherecter);
                else s = cherecter + s;
            }
        }
    }
    if(state == 1) reverse(s.begin(),s.end());

    cout << s << endl;
}
        
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
